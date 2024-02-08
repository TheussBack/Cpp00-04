/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:30:12 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/07 13:48:04 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>

class Harl{

	private :

		void	debug();
		void	info();
		void	warning();
		void	error();

	public :

		void	complain(std::string level);
		Harl();
		~Harl();

};

typedef void( Harl::*thoughs )( void );
