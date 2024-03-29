/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:50:37 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/20 17:21:59 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Doudou("Doudou");

	/* Info */
	std::cout << std::endl;
	std::cout << "\033[32m♡ ⋆｡Status: Active✧\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[33m✧･ﾟ: Everything is set, ready to attack !*✧･ﾟ\033[0m" << std::endl;
	std::cout << std::endl;

	/* Test */
	std::cout << "                          \033[34mSee enemies approching...\n\033[0m" << std::endl;

	std::cout << "\033[33m.・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。.\n\033[0m" << std::endl;
	std::cout << "       \033[31m╔════════════════════════ ❀•°❀°•❀ ════════════════════════════╗\n\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "                         \033[34mSee enemies approching...\n\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "                                  \033[31mFIGHT !\n\033[0m" << std::endl;
	std::cout << std::endl;
	Doudou.attack("Sharks");
	Doudou.takeDamage(3);
	Doudou.attack("Pirates");
	Doudou.takeDamage(4);
	Doudou.beRepaired(10);
	Doudou.attack("Spirits");
	Doudou.takeDamage(10);
	Doudou.attack("Dragon");
	Doudou.attack("Lions");
	Doudou.attack("Kings");

	std::cout << "\033[35m\nFights are over...\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "       \033[31m╚════════════════════════ ❀•°❀°•❀ ════════════════════════════╝\n\033[0m" << std::endl;
	std::cout << "\033[33m.・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。.\n\033[0m" << std::endl;
}
