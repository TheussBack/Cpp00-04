/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:50:33 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/26 15:10:58 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
public:
				Cure(void);
				Cure(const Cure &other);
	virtual		~Cure(void);
	Cure		&operator=(const Cure &other);
	AMateria	*clone(void) const;
	void		use(ICharacter &target);
};

#endif
