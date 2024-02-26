/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:52:48 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/22 17:11:20 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <stdlib.h>
#include <cstdlib>

class Cat : public Animal
{
	private :

		Brain *_brain;

	public :
		Cat();
		~Cat();
		Cat(std::string type);
		Cat(const Cat& other);
		Cat& operator=(const Cat &other);

		void makeSound() const;
		Brain *getBrain();
		void printIdea();
};
