/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:10:58 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/24 17:13:32 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", 0, 0, "")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request",  72, 45, target)
{
	if (target == "\0")
		throw std::invalid_argument("Target name cannot be empty");
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj) : Form("robotomy request",  72, 45, obj.getTarget())
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj, std::string &target) : Form(obj.getName(),  72, 45, target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator = (RobotomyRequestForm &obj)
{
	if (this == &obj)
		return (*this);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	if (this->isSigned() == 1 && executor.getGrade() < this->getExec())
	{
		std::cout << "* drill drill *\n" << this->getTarget() << " has been robotomized successfully 50% of the time.\n";
	}
}

std::ostream &operator << (std::ostream &out, RobotomyRequestForm &obj)
{
	out << "Form: " << obj.getName() << ". Grade to sign: "
	<< obj.getGrade() << ". Grade to execute: " << obj.getExec() << ". This Form needs to get robotimized.";
	return (out);
}

Form	*RobotomyRequestForm::clone(std::string &target)
{
	Form *a = new RobotomyRequestForm(*this, target);
	return (a);
}
