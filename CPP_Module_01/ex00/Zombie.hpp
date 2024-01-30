/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uniix <uniix@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:15:37 by uniix             #+#    #+#             */
/*   Updated: 2024/01/22 22:14:41 by uniix            ###   ########.fr       */
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
	
		Zombie(std::string name);
		~Zombie();
		
		void	announce();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );