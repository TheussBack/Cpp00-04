/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:50:24 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/26 15:10:06 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
private:
						AMateria(void);
protected:
	std::string			type;
	unsigned int		xp;
public:
						AMateria(const std::string &type);
						AMateria(const AMateria &other);
	AMateria			&operator=(const AMateria &other);
	virtual				~AMateria(void);
	const std::string	&getType(void) const;
	unsigned int		getXP(void) const;
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);
};

#endif
