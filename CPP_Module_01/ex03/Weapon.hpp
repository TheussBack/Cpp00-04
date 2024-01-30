/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:31:31 by uniix             #+#    #+#             */
/*   Updated: 2024/01/30 15:11:09 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>

class Weapon
{
	private :

		std::string _type;

	public :

		Weapon(const std::string& type);
		~Weapon();

		const std::string& getType();
		void	setType(std::string type);
};
