/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:50:50 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/26 15:11:53 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	int				current;
	AMateria		*sources[4];
public:
					MateriaSource(void);
					MateriaSource(const MateriaSource &other);
	virtual			~MateriaSource(void);
	MateriaSource	&operator=(const MateriaSource &other);
	void			learnMateria(AMateria *m);
	AMateria		*createMateria(const std::string &type);
};

#endif
