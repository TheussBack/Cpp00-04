/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:56:15 by hrobin             #+#    #+#             */
/*   Updated: 2024/01/17 19:31:34 by hrobin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <limits>
#include <cctype>
#include <string>

class contact
{
	private:

		int	_index;

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		std::string	_print_str_10(std::string str) const;

	public:

		contact();
		~contact();

		int	set_contact_info(int index);

		void	display_all() const;
		void	display_info() const;
};
