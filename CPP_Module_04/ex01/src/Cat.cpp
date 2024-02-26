/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:55:40 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/22 17:11:54 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called!" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat &original) : Animal(original) {
    std::cout << "Cat copy constructor called!" << std::endl;
    this->type = original.type;
    this->_brain = new Brain(*original._brain);
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Cat destructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat &original) {
    std::cout << "Cat assignation operator called!" << std::endl;
    if (this != &original) {
        this->type = original.type;
        delete this->_brain;
        this->_brain = new Brain(*original._brain);
    }
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain() {
    return (this->_brain);
}

void Cat::printIdea()
{
	_brain->getIdea();
}
