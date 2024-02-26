/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:55:45 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/22 17:19:58 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called!" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog &original) : Animal (original) {
    std::cout << "Dog copy constructor called!" << std::endl;
    this->type = original.type;
    this->_brain = new Brain(*original._brain);
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << "Dog destructor called!" << std::endl;
}

Dog &Dog::operator=(Dog const &original) {
    std::cout << "Dog assignation operator called!" << std::endl;
    if (this != &original) {
        this->type = original.type;
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain(*original._brain);
    }
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain() {
    return (this->_brain);
}

void Dog::printIdea()
{
	_brain->getIdea();
}
