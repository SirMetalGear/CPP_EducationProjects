/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:47:36 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/21 13:39:55 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class AMateria;

class Character : public ICharacter
{
private:
	int				count;
	int				index[4];
	AMateria		*materia[5];
	std::string		name;
public:
	Character(std::string const & name);
	Character();
	Character(const Character &obj);
	Character	&operator = (const Character &obj);
	virtual ~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif