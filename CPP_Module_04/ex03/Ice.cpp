/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:51:10 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/26 15:23:54 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():
	AMateria("ice")
{
}

Ice::Ice(const Ice &other):
	AMateria("ice")
{
	this->xp = other.xp;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(const Ice &other)
{
	this->xp = other.xp;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout <<"* shoots an ice bolt at " << target.getName()<< " *" << std::endl;
}
