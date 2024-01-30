/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:59:52 by hrobin            #+#    #+#             */
/*   Updated: 2024/01/25 21:59:48 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::set_name(std::string Name)
{
	this->name = Name;
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		Horde[i].set_name(name);
	return(Horde);
}
