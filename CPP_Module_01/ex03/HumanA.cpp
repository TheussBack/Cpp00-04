/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:00:46 by uniix             #+#    #+#             */
/*   Updated: 2024/01/30 15:24:15 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& Arme) : _name(name), _Arme(Arme) {};

HumanA::~HumanA()
{
	//std::cout << "destructeur called" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with " << this->_Arme.getType() << std::endl;
}
