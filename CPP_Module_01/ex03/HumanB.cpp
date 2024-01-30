/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:16:03 by uniix             #+#    #+#             */
/*   Updated: 2024/01/30 15:24:09 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {};

HumanB::~HumanB()
{
	//std::cout << "destructeur called" << std::endl;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with " << this->_Arm->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& Arm)
{
	this->_Arm = &Arm;
}
