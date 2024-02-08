/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:48:30 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/07 14:04:56 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

Harl::Harl()
{
	// std::cout << "constructor called" << std::endl;
}

Harl::~Harl()
{
	// std::cout << "destructor called" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	size_t i;
	i = 0;
	while(i <= 3 && levels[i] != level)
		i++;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignifiant problems ]" <<std::endl;
	}

}

void	Harl::debug()
{
	std::cout << std::endl;
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << std::endl;
	std::cout << "⋆˚✿˖°𝐈 𝐥𝐨𝐯𝐞 𝐡𝐚𝐯𝐢𝐧𝐠 𝐞𝐱𝐭𝐫𝐚 𝐛𝐚𝐜𝐨𝐧 𝐟𝐨𝐫 𝐦𝐲 𝟕𝐗𝐋-𝐝𝐨𝐮𝐛𝐥𝐞-𝐜𝐡𝐞𝐞𝐬𝐞-𝐭𝐫𝐢𝐩𝐥𝐞-𝐩𝐢𝐜𝐤𝐥𝐞-𝐬𝐩𝐞𝐜𝐢𝐚𝐥𝐤𝐞𝐭𝐜𝐡𝐮𝐩 𝐛𝐮𝐫𝐠𝐞𝐫. 𝐈 𝐫𝐞𝐚𝐥𝐥𝐲 𝐝𝐨 ! •ᴗ•" << std::endl;
	std::cout << std::endl;
}

void	Harl::info()
{
	std::cout << std::endl;
	std::cout << "[ INFO ]" << std::endl;
	std::cout << std::endl;
	std::cout << "๋࣭ ⭑𝐈 𝐜𝐚𝐧𝐧𝐨𝐭 𝐛𝐞𝐥𝐢𝐞𝐯𝐞 𝐚𝐝𝐝𝐢𝐧𝐠 𝐞𝐱𝐭𝐫𝐚 𝐛𝐚𝐜𝐨𝐧 𝐜𝐨𝐬𝐭𝐬 𝐦𝐨𝐫𝐞 𝐦𝐨𝐧𝐞𝐲 :( ❀ 𝐘𝐨𝐮 𝐝𝐢𝐝𝐧'𝐭 𝐩𝐮𝐭 𝐞𝐧𝐨𝐮𝐠𝐡 𝐛𝐚𝐜𝐨𝐧 𝐢𝐧 𝐦𝐲 𝐛𝐮𝐫𝐠𝐞𝐫 ! °◠° 𝐈𝐟 𝐲𝐨𝐮 𝐝𝐢𝐝, 𝐈 𝐰𝐨𝐮𝐥𝐝𝐧'𝐭 𝐛𝐞 𝐚𝐬𝐤𝐢𝐧𝐠 𝐟𝐨𝐫 𝐦𝐨𝐫𝐞 !" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning()
{
	std::cout << std::endl;
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << std::endl;
	std::cout << "𝐈 𝐭𝐡𝐢𝐧𝐤 𝐈 𝐝𝐞𝐬𝐞𝐫𝐯𝐞 𝐭𝐨 𝐡𝐚𝐯𝐞 𝐬𝐨𝐦𝐞 𝐞𝐱𝐭𝐫𝐚 𝐛𝐚𝐜𝐨𝐧 𝐟𝐨𝐫 𝐟𝐫𝐞𝐞. 𝐈'𝐯𝐞 𝐛𝐞𝐞𝐧 𝐜𝐨𝐦𝐢𝐧𝐠 𝐟𝐨𝐫 𝐲𝐞𝐚𝐫𝐬 𝐰𝐡𝐞𝐫𝐞𝐚𝐬 𝐲𝐨𝐮 𝐬𝐭𝐚𝐫𝐭𝐞𝐝 𝐰𝐨𝐫𝐤𝐢𝐧𝐠 𝐡𝐞𝐫𝐞 𝐬𝐢𝐧𝐜𝐞 𝐥𝐚𝐬𝐭 𝐦𝐨𝐧𝐭𝐡.☹" << std::endl;
	std::cout << std::endl;
}

void	Harl::error()
{
	std::cout << std::endl;
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << std::endl;
	std::cout << "❀˖°𝐓𝐡𝐢𝐬 𝐢𝐬 𝐮𝐧𝐚𝐜𝐜𝐞𝐩𝐭𝐚𝐛𝐥𝐞 ! (·•᷄∩•᷅ ) 𝐈 𝐰𝐚𝐧𝐭 𝐭𝐨 𝐬𝐩𝐞𝐚𝐤 𝐭𝐨 𝐭𝐡𝐞 𝐦𝐚𝐧𝐚𝐠𝐞𝐫 𝐧𝐨𝐰.☆" << std::endl;
	std::cout << std::endl;
}
