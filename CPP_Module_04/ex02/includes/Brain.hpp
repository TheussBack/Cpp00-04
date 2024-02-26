/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:14:00 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/26 12:35:04 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>


class Brain
{
	public :
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		virtual ~Brain();

		void getIdea() const;
	private :
		std::string ideas[100];
};
