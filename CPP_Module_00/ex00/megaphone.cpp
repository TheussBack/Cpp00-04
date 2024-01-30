/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:58:11 by hrobin            #+#    #+#             */
/*   Updated: 2024/01/18 14:38:31 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <string>

int main( int ac, char **av )
{
	if (ac <= 1)
	{
		std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int	i = 0;
	std::string	input;

	while (av[++i])
		input += av[i];
	std::transform(input.begin(), input.end(), input.begin(), ::toupper);
	std::cout << input << std::endl;
}
