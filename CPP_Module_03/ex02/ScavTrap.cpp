/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:22:11 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/20 18:27:54 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	//std::cout << "Constructeur called" << std::endl;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	//std::cout << "Destruteur called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "(ScavTrap) : Constructor called for " << name << std::endl;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	name = Name;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "(ScavTrap): Copy constructor called" << std::endl;
	(*this) = other;
}

void	ScavTrap::guardGate()
{
	std::cout << "                     " << this->Name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->Hit_points > 0 && this->Energy_points > 0)
	{
		std::cout << "          Now " << Name << " appears and attacks " << target << " for " << Attack_damage << " points of damages" << std::endl;
		this->Energy_points -= 1;
	}
	else
		std::cout << "    Oh no " << this->Name << " is dead or has no energy left, therefor he cannot attack " << target << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "(ScavTrap) : Assignment operator set" << std::endl;
	Attack_damage = other.Attack_damage;
	Energy_points = other.Energy_points;
	Hit_points = other.Hit_points;
	Name = other.Name;
	return (*this);
}

int	ScavTrap::getEnergyPoints() const
{
	return (Energy_points);
}
