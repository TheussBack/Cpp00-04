/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:50:29 by hrobin            #+#    #+#             */
/*   Updated: 2024/02/26 15:10:47 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
private:
						Character(void);
	std::string			name;
	int					equipped;
	AMateria			*inventory[4];
public:
						Character(const std::string &name);
						Character(const Character &other);
	virtual				~Character(void);
	Character			&operator=(const Character &other);
	const std::string	&getName(void) const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
};

#endif
