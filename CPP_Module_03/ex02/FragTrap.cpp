/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:39:56 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/20 19:15:07 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "(FragTrap) : Constructor called for " << name << std::endl;
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
	name = Name;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "(FragTrap): Copy constructor called" << std::endl;
	(*this) = other;
}

FragTrap::FragTrap()
{
	//std::cout << "(FragTrap) : Constructeur called" << std::endl;
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "(FragTrap) : Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	std::cout << "(FragTrap) : Assignment operator set" << std::endl;
	Attack_damage = other.Attack_damage;
	Energy_points = other.Energy_points;
	Hit_points = other.Hit_points;
	Name = other.Name;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << std::endl;
	std::cout << "                                  High five !" << std::endl;
	std::cout << std::endl;
}
