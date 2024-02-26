/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:52:03 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/26 12:20:46 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Moth")
{
	std::cout << "(Animal) : Default constructor called" << std::endl;
}

Animal::Animal(std::string _Name) : type(_Name)
{
	std::cout << "(Animal) : Default constructor called" << std:: endl;
}

Animal::~Animal()
{
	std::cout << "(Animal) : Destructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "(Animal) : Copy constructor called" << std::endl;
	(*this) = other;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout  << "(Animal) : assignement operator set" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << type <<" : ...." << std::endl;
}

const std::string Animal::getType() const
{
	std::cout << "The type is : ";
	return (type);
}
