/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:50:45 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/26 15:11:24 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual				~IMateriaSource() {}
	virtual void		learnMateria(AMateria *m) = 0;
	virtual AMateria	*createMateria(const std::string &type) = 0;
};

#endif
