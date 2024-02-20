/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:51:06 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/20 18:20:52 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

#pragma once

class	ClapTrap
{
	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		virtual ~ClapTrap();
		ClapTrap& operator=(const ClapTrap &other);
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHitsPoints(void) const;
		int	getEnergyPoints() const;

	protected:

		std::string Name;
		unsigned int Hit_points;
		unsigned int	Energy_points;
		unsigned int	Attack_damage;

};
