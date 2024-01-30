/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:36:44 by hrobin            #+#    #+#             */
/*   Updated: 2024/01/25 22:01:55 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 10

int	main(void)
{
	Zombie* Horde = zombieHorde(N, "Christoph");
	for (size_t i = 0; i < N; i++)
		Horde[i].announce();
	delete []	Horde;
}
