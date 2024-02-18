/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:50:52 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/18 19:15:24 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :Name(name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	Attack_damage = other.Attack_damage;
	Energy_points = other.Energy_points;
	Hit_points = other.Hit_points;
	Name = other.Name;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Hit_points > 0)
	{
		std::cout << "Here is " << this->Name << " and he's attacking ̗̀➛ " << target << std::endl;
		this->Energy_points -= 1;
	}
	else
		std::cout << "Unfortunately " << this->Name << " is dead therefor he cannot attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->Name << " was hit, and suffers from " << amount << " points of damage✧.*" << std::endl;
	if (this->Hit_points <= amount)
	{
		this->Hit_points = 0;
		std::cout << "And THEN " << this->Name << " died..(º︿º)" << std::endl;
	}
	else
		this->Hit_points -= amount;
};

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->Name <<" decides to rest for " << amount << " of points " << std::endl;
	this->Energy_points += amount;
}
