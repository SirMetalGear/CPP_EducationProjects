/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 21:22:09 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/21 16:32:39 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->count = 0;
	for (int i = 0; i < 5; i++)
	{
		this->materia[i] = 0;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; this->materia[i] != 0; i++)
		delete this->materia[i];
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	*this = obj;
}

MateriaSource &MateriaSource::operator = (const MateriaSource &obj)
{
	if (&obj == this)
		return *this;
	for (int i = 0; this->materia[i] != 0; i++)
		delete this->materia[i];
	for (int i = 0; i < 4; i++)
		this->materia[i] = obj.materia[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria* obj)
{
	if (this->count >= 4 || obj == 0)
		return ;
	this->materia[this->count] = obj;
	// std::cout << this->materia[this->count]->getType() << " Materia has been learnt\n";
	this->count++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != 0 && type == this->materia[i]->getType())
		{
			AMateria *a = this->materia[i]->clone();
			return (a);
		}
	}
	return (0);
}
