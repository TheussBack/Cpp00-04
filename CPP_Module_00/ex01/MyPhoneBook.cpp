/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 19:55:37 by hrobin             #+#    #+#             */
/*   Updated: 2024/01/17 20:15:35 by hrobin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyPhoneBook.hpp"
#include <iostream>
#include <string>

MyPhoneBook::MyPhoneBook()
{
	// std::cout << "phonebook's constructor 've been called" << std::endl;
	return;
}

MyPhoneBook::~MyPhoneBook()
{
	// std::cout << "phonebook's destructor 've been called" << std::endl;
	return;
}

void MyPhoneBook::_add()
{
	static int	index;

	this->_contact_list[index % 8].set_contact_info(index % 8); //attribue le contact au numero de contact
	index++;
	return;
}

void MyPhoneBook::_display_contact_info() const
{
	int index;
	int	input;

	index = -1;
	input = -1;
	std::cout << std::endl;
	std::cout << '|' << std::setw(10) << "Index";
	std::cout << '|' << std::setw(10) << "First Name";
	std::cout << '|' << std::setw(10) << "Last Name";
	std::cout << '|' << std::setw(10) << "Nickname";
	std::cout << '|' << std::endl;
	while (++index < 8)
		_contact_list[index].display_info();
	std::cout << "Enter the number of the contact you wish to display : ";
	std::cin >> input;
	if (std::cin.good() && (input >= 0 && input <= 7))
		_contact_list[input].display_all();
	else
	{
		std::cin.clear();
		std::cout << "Invalid input" << std::endl;
		std::cout << "returning to PhoneBook" << std::endl;
	}
}

int	MyPhoneBook::_phonebook_parser(std::string str)
{
	if (str == "ADD")
	{
		MyPhoneBook::_add();
		return(1);
	}
	if (str == "SEARCH")
	{
		MyPhoneBook::_display_contact_info();
		return(1);
	}
	if (str == "EXIT")
		return (0);
	return (1);
}

void	MyPhoneBook::run_phonebook()
{
	std::string	input;

	std::cout << ".・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。." << std::endl;
	std::cout << "       ╔════════════════════════ ❀•°❀°•❀ ════════════════════════════╗" << std::endl;
	std::cout << "                       𝓦𝓮𝓵𝓬𝓸𝓶𝓮 𝓽𝓸 𝔂𝓸𝓾𝓻 𝓪𝓶𝓪𝔃𝓲𝓷𝓰 𝓟𝓱𝓸𝓷𝓮𝓑𝓸𝓸𝓴" << std::endl;
	std::cout << "       ╚════════════════════════ ❀•°❀°•❀ ════════════════════════════╝" << std::endl;
	std::cout << std::endl;
	std::cout << "               ℍ𝕖𝕣𝕖, 𝕪𝕠𝕦 𝕔𝕒𝕟 𝕦𝕤𝕖 '𝔸𝔻𝔻', '𝕊𝔼𝔸ℝℂℍ', 𝕒𝕟𝕕 '𝔼𝕏𝕀𝕋'." << std::endl;
	std::cout << "                       𝔸𝕟𝕪𝕥𝕙𝕚𝕟𝕘 𝕖𝕝𝕤𝕖 𝕨𝕚𝕝𝕝 𝕓𝕖 𝕕𝕚𝕤𝕔𝕒𝕣𝕕𝕖𝕕 :𝕠." << std::endl;
	std::cout << "                  𝕐𝕠𝕦 𝕔𝕒𝕟 𝕒𝕕𝕕 𝕒 𝕞𝕒𝕩𝕚𝕞𝕦𝕞  𝕠𝕗 𝟠 𝕔𝕠𝕟𝕥𝕒𝕔𝕥𝕤 !" << std::endl;
	std::cout << std::endl;
	std::cout << ".・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。..・。.・゜✭・.・✫・゜・。." << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "✿>$";
	while (MyPhoneBook::_phonebook_parser(input) > 0)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
		if (input != "EXIT" && input != "ADD")
			std::cout << "✿>$";
	}
}

int	main(void)
{
	MyPhoneBook registery;

	registery.run_phonebook();
	return(0);
}
