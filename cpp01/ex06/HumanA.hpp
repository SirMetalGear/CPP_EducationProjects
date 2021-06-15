/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:44:28 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/13 13:57:11 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA
{
private:
	const std::string &_name;
	Weapon &_weapon;
public:
	HumanA(const std::string &name, Weapon &club);
	~HumanA();
	void	attack();
};

#endif
