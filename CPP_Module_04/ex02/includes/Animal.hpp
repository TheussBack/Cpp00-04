/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:51:48 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/26 12:34:37 by hrobin           ###   ########.fr       */
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
	Animal(const Animal& other);
	Animal(std::string _name);
	virtual ~Animal();


	Animal& operator=(const Animal &other);
	virtual void makeSound() const = 0;
	virtual const std::string getType() const;

};
