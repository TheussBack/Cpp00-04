/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:41:12 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/21 15:46:28 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "(WrongCat) : Default constructor called" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "(WrongCat) : Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "(WrongCat) : Copy constructor called" << std::endl;
	(*this) = other;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout  << "(WrongCat) : assignement operator set" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}
