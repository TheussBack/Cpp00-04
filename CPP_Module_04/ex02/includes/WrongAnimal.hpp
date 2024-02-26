/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:30:50 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/26 12:36:13 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>

class WrongAnimal
{
	public:

	WrongAnimal();
	WrongAnimal(std::string _name);
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal& other);

	WrongAnimal& operator=(const WrongAnimal &other);

	virtual void makeSound() const;
	std::string getType() const;

	protected :

	std::string type;
};
