/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:09:49 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/24 17:09:10 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	this->forms[0] = new PresidentialPardonForm("temp");;
	this->forms[1] = new RobotomyRequestForm("temp");
	this->forms[2] = new ShrubberyCreationForm("temp");
	this->forms[3] = 0;
	std::cout << "Intern is created\n";
}

Intern::~Intern()
{
	for (int i = 0; i < 3; i++)
		delete this->forms[i];
	std::cout << "Intern is destroyed\n";
}

Intern::Intern(Intern &obj)
{
	*this = obj;
}

Intern &Intern::operator = (Intern &obj)
{
	if (this == &obj)
		return (*this);
	return (*this);
}

Form *Intern::makeForm(std::string formType, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (formType == this->forms[i]->getName())
			return (this->forms[i]->clone(target));
	}
	std::cout << "No such type form!\n";
	return 0;
}
