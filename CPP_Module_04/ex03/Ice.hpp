/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:50:37 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/26 15:11:11 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
public:
				Ice(void);
				Ice(const Ice &other);
	virtual		~Ice(void);
	Ice			&operator=(const Ice &other);
	AMateria	*clone(void) const;
	void		use(ICharacter &target);
};

#endif
