/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:52:39 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/21 12:47:40 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		Dog();
		~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog &other);

		void makeSound() const;
};
