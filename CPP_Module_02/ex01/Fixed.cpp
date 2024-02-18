/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:08:25 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/15 15:53:30 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

//╔════════════════════════════════ஓ๑♡๑ஓ═══════════════════════════════════════╗
//						✿Constructeurs/Destructeurs✿
//╚════════════════════════════════ஓ๑♡๑ஓ═══════════════════════════════════════╝

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
	this->fixInt = 0;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int chier) : fixInt(chier << _fractionalBits)
{
    std::cout << " int constructor called" << std::endl;
    this->fixInt = (chier << Fixed::_fractionalBits);
}

Fixed::Fixed(const float chier)
{
    std::cout << "Float constructor called" << std::endl;
	this->fixInt = roundf(chier * (1 << Fixed::_fractionalBits)); //roundf arrondit la Valeur à virgule flottante
}

Fixed::Fixed( const Fixed &other ) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(other.getRawBits());
}

//╔════════════════════════════════ஓ๑♡๑ஓ═══════════════════════════════════════╗
//							✿Surcharges d'op✿
//╚════════════════════════════════ஓ๑♡๑ஓ═══════════════════════════════════════╝

Fixed& Fixed::operator=( const Fixed &neu ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &neu)
        this->fixInt = neu.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const  &value) //
{
    out << value.toFloat();
    return (out);
}

//╔════════════════════════════════ஓ๑♡๑ஓ═══════════════════════════════════════╗
//							✿Fonctions membres✿
//╚════════════════════════════════ஓ๑♡๑ஓ═══════════════════════════════════════╝

float   Fixed::toFloat(void) const //convertit la valeur en virgule fixe en nombre à virgule flottante
{
    return ((float)this->fixInt / (float)(1 << Fixed::_fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->fixInt >> Fixed::_fractionalBits);
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixInt;
}

void    Fixed::setRawBits( int const raw ) {
    this->fixInt = raw;
}
