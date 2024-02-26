/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:55:40 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/21 12:46:47 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "(Cat) : Default constructor called" << std::endl;
}
Cat::~Cat()
{
	std::cout << "(Cat) : Destructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
	std::cout << "(Cat) : Copy constructor called" << std::endl;
	(*this) = other;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout  << "(Cat) : assignement operator set" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << type <<" : Miaaaawwwww" << std::endl;
}
