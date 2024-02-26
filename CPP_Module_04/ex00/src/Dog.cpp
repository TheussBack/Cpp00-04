/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:55:45 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/21 12:47:48 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "(Dog) : Default constructor called" << std::endl;
}
Dog::~Dog()
{
	std::cout << "(Dog) : Destructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << "(Dog) : Copy constructor called" << std::endl;
	(*this) = other;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout  << "(Dog) : assignement operator set" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << type <<" : Woof" << std::endl;
}
