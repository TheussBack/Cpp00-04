/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:28:22 by uniix             #+#    #+#             */
/*   Updated: 2024/01/18 14:55:30 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "contact.hpp"

class MyPhoneBook {

	public:

		MyPhoneBook();
		~MyPhoneBook();

		void	run_phonebook();

	private:

		contact _contact_list[8];

		void	_add();
		void	_parse_input(std::string str);
		void	_display_contact_info() const;

		int		_phonebook_parser(std::string str);
};
