/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:44:41 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/15 16:24:05 by hrobin           ###   ########.fr       */
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
        ~Fixed();


        Fixed& operator=( const Fixed &other);
		Fixed operator + (Fixed const &other);
		Fixed operator - (Fixed const &other);
		Fixed operator * (Fixed const &other);
		Fixed operator / (Fixed const &other);

		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		Fixed	operator++(int); //post-incrementation
		Fixed	operator++(); //pre-incrementation
		Fixed	operator--();//pre decrementation
		Fixed	operator--(int);//post decrementation

		static Fixed &min(Fixed &a, Fixed &b); //retourne le plus petit d'entre eux
		static Fixed const &min(Fixed const &a, Fixed const &b); //
		static Fixed &max(Fixed &a, Fixed &b);//
		static Fixed const &max(Fixed const &a, Fixed const &b);//


        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float   toFloat(void) const;
        int toInt(void) const;


    private:

        int                 fixInt;
        static const int    _fractionalBits = 8;

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
