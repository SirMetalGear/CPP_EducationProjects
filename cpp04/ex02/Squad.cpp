/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:30:46 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/24 11:34:46 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	this->unitNum = 0;
	this->units = new ISpaceMarine*[2];
	this->units[0] = 0;
	this->units[1] = 0;
}

Squad::~Squad()
{
	for (int i = 0; i < this->unitNum; i++)
		delete this->units[i];
	delete [] this->units;
}

Squad::Squad(const Squad &obj)
{
	*this = obj;
}

Squad &Squad::operator = (const Squad &obj)
{
	if (&obj == this)
		return (*this);
	if (this->unitNum != 0)
		delete [] this->units;
	this->unitNum = obj.unitNum;
	this->units = new ISpaceMarine*[obj.unitNum];
	for (int i = 0; i < obj.unitNum; i++)
		this->units[i] = obj.units[i];
	return (*this);
}

int Squad::getCount() const
{
	return (this->unitNum);
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (this->unitNum == 0)
		return (NULL);
	return (this->units[index]);
}

int Squad::push(ISpaceMarine *obj)
{
	if (obj == NULL)
		return (this->unitNum);
	if (unitNum != 0)
	{
		ISpaceMarine **tmp = new ISpaceMarine*[this->unitNum + 1];
		for (int i = 0; i < this->unitNum; i++)
			tmp[i] = this->units[i];
		delete [] this->units;
		this->units = new ISpaceMarine*[this->unitNum + 2];
		int i = -1;
		while (++i < this->unitNum)
			this->units[i] = tmp[i];
		this->units[i] = obj;
		delete [] tmp;
		this->unitNum++;
		return (this->unitNum);
	}
	else
	{
		this->units[0] = obj;
		this->unitNum++;
		return (this->unitNum);
	}
}
