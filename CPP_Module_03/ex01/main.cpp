/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:50:37 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/20 18:19:45 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << "                   \033[32m♡ ⋆｡Status: Active✧\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "          \033[33m✧･ﾟ: Everything is set, ready to attack !*✧･ﾟ\033[0m" << std::endl;
	std::cout << std::endl;
	ClapTrap a;
	ScavTrap b("Bill");
	std::cout << "dddd" << std::endl;
	std::cout << "dddd" << std::endl;

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
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "       \033[31m╚════════════════════════ ❀•°❀°•❀ ════════════════════════════╝\n\033[0m" << std::endl;
	std::cout << "\033[33m.・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。.\n\033[0m" << std::endl;
}
