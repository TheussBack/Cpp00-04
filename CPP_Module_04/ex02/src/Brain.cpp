/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:08:24 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/22 17:47:27 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;

	const std::string whyNot[] =
	{
		"OULA",
		"Vide...De...Sens",
		"OUAK",
		"HOPLA",
		"MIAM",
		"CALISSE",
		"ADIEU",
		"HOHO",
		"LOLILOL"
	};

	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = whyNot[rand() % 9];
	}
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
	for (int i = 0; i < 100; i++){
		this->ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::getIdea() const
{
	for (int i = 0; i < 9; i++)
		std::cout << "Let me say something : " << ideas[i] << std::endl;
	std::cout << std::endl;
}
