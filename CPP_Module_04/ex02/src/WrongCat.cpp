/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:41:12 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/22 16:26:19 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor called!" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &original) : WrongAnimal(original) {
    std::cout << "WrongCat copy constructor called!" << std::endl;
    *this = original;
}

WrongCat::~WrongCat() {}

WrongCat &WrongCat::operator=(WrongCat const &original) {
    std::cout << "WrongCat assignation operator called!" << std::endl;
    if (this != &original)
        this->type = original.type;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "WrongMeow!" << std::endl;
}

std::string WrongCat::getType() const {
    return (this->type);
}
