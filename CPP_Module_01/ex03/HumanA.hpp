/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:50:31 by uniix             #+#    #+#             */
/*   Updated: 2024/01/30 15:21:58 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private :

		std::string _name;
		Weapon&	_Arme;

	public :

		HumanA(std::string name, Weapon& Arme);
		~HumanA();

		void attack();
};
