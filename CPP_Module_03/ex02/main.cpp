/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:50:37 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/20 19:14:22 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << "                   \033[32m♡ ⋆｡Status: Active✧\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "          \033[33m✧･ﾟ: Everything is set, ready to attack !*✧･ﾟ\033[0m" << std::endl;
	std::cout << std::endl;
	ClapTrap a;
	ScavTrap b("Bill");
	FragTrap c("Nouille");

	std::cout << "\033[33m.・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。.\n\033[0m" << std::endl;
	std::cout << "       \033[31m╔════════════════════════ ❀•°❀°•❀ ════════════════════════════╗\n\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "                         \033[34mSee enemies approching...\n\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "                                  \033[31mFIGHT !\n\033[0m" << std::endl;
	std::cout << std::endl;
	a.attack("Sharks");
	a.beRepaired(22);
	a.takeDamage(21);
	a.beRepaired(22);
	a.attack("Sharks");
	b.attack("The air");
	b.takeDamage(101);
	b.attack("The air");
	b.guardGate();
	c.highFivesGuys();
	c.attack("Cat");
	c.takeDamage(101);
	c.takeDamage(1);
	c.attack("Birds");

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "       \033[31m╚════════════════════════ ❀•°❀°•❀ ════════════════════════════╝\n\033[0m" << std::endl;
	std::cout << "\033[33m.・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。.\n\033[0m" << std::endl;
}
