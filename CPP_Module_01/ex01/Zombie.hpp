/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:15:37 by uniix             #+#    #+#             */
/*   Updated: 2024/01/25 22:00:10 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
	private :

		std::string	name;


	public :

		Zombie();
		~Zombie();

		void	announce();
		void	set_name(std::string Name);
};

Zombie* zombieHorde( int N, std::string name );
