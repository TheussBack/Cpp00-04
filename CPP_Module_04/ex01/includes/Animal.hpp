/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:51:48 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/22 15:59:05 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Animal
{
	protected:

	std::string type;

	public:
	Animal();
	Animal(std::string _name);
	virtual ~Animal();
	Animal(const Animal& other);

	Animal& operator=(const Animal &other);

	virtual void makeSound() const;
	std::string getType() const;

};
