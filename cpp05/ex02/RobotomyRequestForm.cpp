/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:10:58 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/24 14:25:21 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyCreationForm::RobotomyCreationForm() : Form("", 0, 0, "")
{}

RobotomyCreationForm::RobotomyCreationForm(std::string target) : Form("Robotomy creation Form",  72, 45, target)
{
	if (target == "\0")
		throw std::invalid_argument("Target name cannot be empty");
}

RobotomyCreationForm::~RobotomyCreationForm()
{
	std::cout << "RobotomyCreationForm is destroyed\n";
}

RobotomyCreationForm::RobotomyCreationForm(RobotomyCreationForm &obj) : Form("Robotomy creation Form",  72, 45, obj.getTarget())
{}

RobotomyCreationForm &RobotomyCreationForm::operator = (RobotomyCreationForm &obj)
{
	if (this == &obj)
		return (*this);
	return (*this);
}

void	RobotomyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	if (this->isSigned() == 1 && executor.getGrade() < this->getExec())
	{
		std::cout << "* drill drill *\n" << this->getTarget() << " has been robotomized successfully 50% of the time.\n";
	}
}

std::ostream &operator << (std::ostream &out, RobotomyCreationForm &obj)
{
	out << "Form: " << obj.getName() << ". Grade to sign: "
	<< obj.getGrade() << ". Grade to execute: " << obj.getExec() << ". This Form needs to get robotimized.";
	return (out);
}
