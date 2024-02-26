/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:37:46 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/26 12:48:01 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <unistd.h>

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[1;33m"
# define RESET "\e[0m"

int main()
{
	std::cout << std::endl << GREEN << "Test1 :"<< RESET << std::endl;
	std::cout << std::endl;
	Animal* array[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			array[i] = new Dog;
		else
			array[i] = new Cat;
	}

	std::cout << std::endl;
	std::cout << std::endl << GREEN << "Deleting them"<< RESET << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete array[i];

	std::cout << std::endl << GREEN << "Passed :)"<< RESET << std::endl;
	std::cout << std::endl;

	std::cout << std::endl << GREEN << "let's see what happens in a cat brain :"<< RESET << std::endl;
	Cat* test = new Cat;
	Cat* copy = new Cat(*test);

	// Display Ideas.
	std::cout << std::endl << GREEN << "Testing my first cat :"<< RESET << std::endl;
	std::cout << test->getBrain() << std::endl;
	test->makeSound();
	test->printIdea();
	delete test;
	std::cout << std::endl;
	std::cout << GREEN << "Now that the original is deleted, let's see the ideas of the copy :" << RESET << std::endl;
	// Display Ideas.
	std::cout << copy->getBrain() << std::endl;
	copy->makeSound();
	copy->printIdea();
	delete copy;

	std::cout << std::endl;
	std::cout << std::endl << GREEN << "let's see what happens in a dog brain :"<< RESET << std::endl;
	Dog* test2 = new Dog;
	Dog* copy2 = new Dog(*test2);

	// Display Ideas.
	std::cout << std::endl;
	std::cout << std::endl << GREEN << "Testing my first dog :"<< RESET << std::endl;
	std::cout << test2->getBrain() << std::endl;
	test2->makeSound();
	test2->printIdea();
	delete test2;

	std::cout << std::endl;
	std::cout << GREEN << "Now that the original is deleted, let's see the ideas of the copy :" << RESET << std::endl;
	// Display Ideas.
	std::cout << copy2->getBrain() << std::endl;
	copy2->makeSound();
	copy2->printIdea();
	delete copy2;

	std::cout << std::endl;
	std::cout << GREEN << "Here is a WrongCat : " << RESET << std::endl;
	const WrongAnimal* wrong = new WrongCat();
	wrong->makeSound();
	delete wrong;
}
