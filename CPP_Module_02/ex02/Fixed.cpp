/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:42:54 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/16 13:52:59 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//╔════════════════════════════════ஓ๑♡๑ஓ═══════════════════════════════════════╗
//						✿Constructeurs/Destructeurs✿
//╚════════════════════════════════ஓ๑♡๑ஓ═══════════════════════════════════════╝

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
	this->fixInt = 0;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int chier) : fixInt(chier << _fractionalBits)
{
    // std::cout << " int constructor called" << std::endl;
    this->fixInt = (chier << Fixed::_fractionalBits);
}

Fixed::Fixed(const float chier)
{
    // std::cout << "Float constructor called" << std::endl;
	this->fixInt = roundf(chier * (1 << Fixed::_fractionalBits)); //roundf arrondit la Valeur à virgule flottante
}

Fixed::Fixed(const Fixed &other) {
    // std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(other.getRawBits());
}

//╔════════════════════════════════ஓ๑♡๑ஓ═══════════════════════════════════════╗
//							✿Surcharges d'op✿
//╚════════════════════════════════ஓ๑♡๑ஓ═══════════════════════════════════════╝

Fixed& Fixed::operator=(const Fixed &neu)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &neu)
        this->fixInt = neu.getRawBits();
    return *this;
}

Fixed Fixed::operator + (Fixed const &other)
{
		Fixed	value(*this); //garde l'objet original, et fait l'addition sur un temporaire

		value.setRawBits(this->getRawBits() + other.getRawBits());
		return (value); //Nouvel objet Fixed
}

Fixed Fixed::operator - (Fixed const &other)
{
	Fixed	value(*this);

	value.setRawBits(this->getRawBits() - other.getRawBits());
	return (value);
}

Fixed Fixed::operator * (Fixed const &other)
{
	Fixed	value(*this);
	long tmp1 = ((long)this->getRawBits()); //recupere les valeurs brutes et traite en long pour eviter des overflow
	long tmp2 = ((long)other.getRawBits());

	value.setRawBits((tmp1 * tmp2) / (1 << Fixed::_fractionalBits)); // la division pour pour compenser la position de la virgule fixe dans le résultat.
	return (value);
}

Fixed Fixed::operator / (Fixed const &other)
{
	Fixed	value(*this);
	long tmp1 = ((long)this->getRawBits());
	long tmp2 = ((long)other.getRawBits());

	value.setRawBits(tmp1 * (1 << Fixed::_fractionalBits) / tmp2); //pour déplacer la virgule fixe vers la droite après la multiplication
	return (value);
}

bool Fixed::operator>(const Fixed& other) const
{
	return(this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const
{
	return(this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const
{
	return(this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const
{
	return(this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other) const
{
	return(this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const
{
	return(this->getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return(tmp);
}

Fixed	Fixed::operator++()
{
	this->fixInt++;
	return(*this);
}

Fixed	Fixed::operator--()
{
	this->fixInt--;
	return(*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return(tmp);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const &min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

Fixed &min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

Fixed &max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
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
    // std::cout << "getRawBits member function called" << std::endl;
    return this->fixInt;
}

void    Fixed::setRawBits( int const raw ) {
    this->fixInt = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const  &value) //
{
    out << value.toFloat();
    return (out);
}
