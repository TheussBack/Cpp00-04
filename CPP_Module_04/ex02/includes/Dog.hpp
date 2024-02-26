/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:52:39 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/22 17:20:13 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <stdlib.h>
#include <cstdlib>

class Dog : public Animal
{
	private:

		Brain *_brain;

	public:
		Dog();
		~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog &other);
		Dog(std::string _type);

		void makeSound() const;
		Brain *getBrain();
		void printIdea();
};
