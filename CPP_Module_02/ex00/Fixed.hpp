/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:20:57 by maparigi          #+#    #+#             */
/*   Updated: 2024/02/08 14:23:00 by hrobin           ###   ########.fr       */
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

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

private:

    int                 fixInt;
    static const int    _fractionalBits = 8;

};

