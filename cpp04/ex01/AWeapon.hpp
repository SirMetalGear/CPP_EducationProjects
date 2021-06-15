/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:53:38 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/22 10:12:08 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
private:
	AWeapon();
protected:
	std::string	name;
	int			apCost;
	int			damage;
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &obj);
	virtual ~AWeapon();

	std::string  const &getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

	AWeapon	&operator = (const AWeapon &obj);
};

#endif
