/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:27:55 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/09 13:21:46 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout << "< " << this->name << " (" << this->type << ") >"
	<< " finally found a piece in death!\n";
}

void	Zombie::announce()
{
	std::cout << "< " << this->name << " (" << this->type << ") >"
	<< " Braiiiiiiinnnssss...\n";
}

void	Zombie::set_params(std::string type, std::string name)
{
	this->name = name;
	this->type = type;
}
