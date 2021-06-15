/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:02:27 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/20 12:24:08 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : hp(hp), type(type)
{}

Enemy::Enemy()
{}

Enemy::~Enemy()
{}

Enemy::Enemy(const Enemy &obj)
{
	*this = obj;
}

Enemy &Enemy::operator = (const Enemy &obj)
{
	if (&obj == this)
		return *this;
	this->hp = obj.hp;
	this->type = obj.type;
	return *this;
}

std::string const &Enemy::getType() const
{
	return (this->type);
}

int Enemy::getHP() const
{
	return (this->hp);
}

void Enemy::takeDamage(int dmg)
{
	if (hp != 0)
	{
		if (dmg <= 0)
			return ;
		else
			this->hp = this->hp - dmg;
		if (this->hp < 0)
			this->hp = 0;
	}
}