/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:09:08 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/16 13:51:59 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixInt(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &neu ) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(neu.getRawBits());
}

Fixed& Fixed::operator=( const Fixed &neu ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &neu)
        this->fixInt = neu.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixInt;
}

void    Fixed::setRawBits( int const raw ) {
    this->fixInt = raw;
}
