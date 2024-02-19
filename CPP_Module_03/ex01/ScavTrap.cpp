/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:22:11 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/19 19:22:33 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	//std::cout << "Constructeur called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	//std::cout << "Destruteur called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{

}

ScavTrap::ScavTrap(const ScavTrap& other)
{

}

void	ScavTrap::guardGate()
{
	std::cout << this->Name << " is now in Gate keeper mode." << std::endl;
}

void attack(const std::string& target)
{

}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	
}
