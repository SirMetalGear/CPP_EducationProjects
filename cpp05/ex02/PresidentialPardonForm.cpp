/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:19:46 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/24 14:28:52 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", 0, 0, "")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidental pardon Form",  25, 5, target)
{
	if (target == "\0")
		throw std::invalid_argument("Target name cannot be empty");
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm is destroyed\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj) : Form("Presidental pardon Form",  25, 5, obj.getTarget())
{}

PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm &obj)
{
	if (this == &obj)
		return (*this);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	if (this->isSigned() == 1 && executor.getGrade() < this->getExec())
	{
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox.\n";
	}
}

std::ostream &operator << (std::ostream &out, PresidentialPardonForm &obj)
{
	out << "Form: " << obj.getName() << ". Grade to sign: "
	<< obj.getGrade() << ". Grade to execute: " << obj.getExec() << ". This Form needs to get presidential pardon.";
	return (out);
}
