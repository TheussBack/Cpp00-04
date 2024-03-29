/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:09:04 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/15 15:49:42 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# include <iostream>

class Fixed
{
    public:

        Fixed();
        Fixed( const Fixed &neu );
        Fixed& operator=( const Fixed &neu );
        ~Fixed();

        int     getRawBits( void ) const; //permet d'obtenir la représentation brute du nombre à virgule fixe
        void    setRawBits( int const raw ); //permet de modifier cette représentation brute, mettre à jour la représentation interne du nombre à virgule fixe en fonction de cette valeur brute fournie.

    private:

        int                 fixInt;
        static const int    _fractionalBits = 8;

};

