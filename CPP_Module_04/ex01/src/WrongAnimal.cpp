/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:30:33 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/22 16:25:51 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal constructor called!" << std::endl;
    this->type = "";
}

WrongAnimal::WrongAnimal(WrongAnimal const &original) {
    std::cout << "WrongAnimal copy constructor called!" << std::endl;
    *this = original;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &original) {
    std::cout << "WrongAnimal assignation operator called!" << std::endl;
    if (this != &original)
        this->type = original.type;
    return (*this);
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return (this->type);
}
