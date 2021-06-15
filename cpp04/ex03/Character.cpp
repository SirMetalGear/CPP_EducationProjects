/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:47:23 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/21 16:31:08 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->name = name;
	this->count = 0;
	for (int i = 0; i < 4; i++)
	{
		index[i] = 0;
		this->materia[i] = 0;
	}
	this->materia[4] = 0;
}

Character::Character()
{}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (index[i] == 1)
			delete this->materia[i];
	}
}

Character::Character(const Character &obj)
{
	*this = obj;
}

Character &Character::operator = (const Character &obj)
{
	if (&obj == this)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (index[i] == 1)
			delete this->materia[i];
	}
	for (int i = 0; i < 4; i++)
	{
		this->index[i] = obj.index[i];
		if (this->index[i] == 1)
			this->materia[i] = obj.materia[i]->clone();
		else
			this->materia[i] = 0;
	}
	this->materia[4] = 0;
	this->name = obj.name;
	return *this;
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (this->count >= 4 || m == 0)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if (index[i] == 0)
		{
			this->materia[i] = m;
			index[i] = 1;
			break ;
		}
	}
	this->count++;
}

void Character::unequip(int idx)
{
	if (idx >= this->count || idx < 0 || index[idx] == 0)
		return ;
	index[idx] = 0;
	this->materia[idx] = 0;
	this->count--;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->index[idx] == 1)
		this->materia[idx]->use(target);
}
