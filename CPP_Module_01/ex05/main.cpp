/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:01:39 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/07 13:22:02 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int	main()
{
	std::string input;
	Harl	harl;

	do
	{
		std::cout << "๋࣭ ⭑𝐄𝐧𝐭𝐞𝐫 𝐚 𝐥𝐞𝐯𝐞𝐥 ⊹₊⋆ :";
		std::getline(std::cin, input);
		if (!std::cin.good() || std::cin.eof())
			return(1);
		harl.complain(input);
	} while (input != "exit");

	return (0);
}
