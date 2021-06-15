/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:28:05 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/08 16:56:49 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{}

ZombieEvent::~ZombieEvent()
{
	std::cout << "ZombieEven class is freed\n";
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}
Zombie*	ZombieEvent::newZombie(std::string name)
{
	return new Zombie(this->type, name);
}
