/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:08:37 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/15 13:12:52 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    public:

        Fixed();
        Fixed(const int chier); //transformer chier en nombre a vrigule fix
        Fixed(const float chier); //convertir en virgule fixe ?
        Fixed( const Fixed &other );
        Fixed& operator=( const Fixed &other);
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat(void) const;
        int toInt(void) const;


    private:

        int                 fixInt;
        static const int    _fractionalBits = 8;

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
