/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:52:48 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/21 12:46:00 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
	private :


	public :
		Cat();
		~Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat &other);

		void makeSound() const;
};
