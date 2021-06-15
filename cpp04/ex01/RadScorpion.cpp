/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:24:08 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/22 10:16:09 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion::RadScorpion(const RadScorpion &obj) : Enemy(0, "")
{
	*this = obj;
}

RadScorpion &RadScorpion::operator = (const RadScorpion &obj)
{
	if (&obj == this)
		return *this;
	this->hp = obj.hp;
	this->type = obj.type;
	return *this;
}
