/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:27:55 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/08 17:02:25 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name)
{
	this->name = name;
	this->type = type;
}

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
