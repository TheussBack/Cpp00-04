/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:50:37 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/16 17:20:26 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Doudou("Doudou");

	/* Info */
	std::cout << std::endl;
	std::cout << "♡ ⋆｡Status: Active✧" << std::endl;
	std::cout << std::endl;
	std::cout << "✧･ﾟ: Everything is set, ready to attack !*✧･ﾟ" << std::endl;
	std::cout << std::endl;

	/* Test */
	std::cout << "See enemies approching...\n" << std::endl;

	Doudou.attack("Sharks");
	Doudou.attack("Pirates");
	Doudou.takeDamage(3);
	Doudou.takeDamage(4);
	Doudou.beRepaired(10);
	Doudou.attack("Dragon");
	Doudou.attack("Spirits");
	Doudou.takeDamage(10);
	Doudou.attack("Lions");
	Doudou.attack("Kings");

	std::cout << "\nFights are over..." << std::endl;
}
