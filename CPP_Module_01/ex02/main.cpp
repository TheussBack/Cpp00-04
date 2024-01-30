/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 22:04:03 by hrobin            #+#    #+#             */
/*   Updated: 2024/01/25 22:14:45 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int	main()
{
	std::string name = "HI THIS IS BRAIN";
	std::string* stringPTR = &name;
	std::string& stringREF = name;

	std::cout << "adress of str = " << &name << std::endl;
	std::cout << "adress in stringPTR = " << stringPTR << std::endl;
	std::cout << "adress in stringREF = " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "str = " << name << std::endl;
	std::cout << "stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;
}
