/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:59:53 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/22 10:12:29 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	Character();
protected:
	std::string	name;
	int			ap;
	AWeapon		*weapon;
public:
	Character(std::string const & name);
	Character(const Character &obj);
	~Character();
	Character	&operator = (const Character &obj);

	void 		recoverAP();
	void 		equip(AWeapon *obj);
	void 		attack(Enemy *obj);
	int			getAP();
	std::string const &getName() const;
	std::string	getWeapon();
};

	std::ostream &operator << (std::ostream &out, Character &obj);

#endif
