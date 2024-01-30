/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:25:06 by uniix             #+#    #+#             */
/*   Updated: 2024/01/30 15:16:00 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private :

		Weapon* _Arm;
		std::string _name;

	public :

		HumanB(std::string name);
		~HumanB();

		void attack();
		void	setWeapon(Weapon& Arm);
};
