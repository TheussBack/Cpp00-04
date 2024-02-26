/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:30:33 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/21 15:38:57 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Moth")
{
	std::cout << "(WrongAnimal) : Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _Name) : type(_Name)
{
	std::cout << "(WrongAnimal) : Default constructor called" << std:: endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "(WrongAnimal) : Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "(WrongAnimal) : Copy constructor called" << std::endl;
	(*this) = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout  << "(WrongAnimal) : assignement operator set" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << type <<" : ...." << std::endl;
}

std::string WrongAnimal::getType() const
{
	std::cout << "The type is : ";
	return (type);
}

