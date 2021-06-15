/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:06:38 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/24 18:02:57 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), grade(0), exec(0), target("")
{}

Form::Form(std::string name, int grade, int exec, std::string target)
: name(name), grade(grade), exec(exec), target(target)
{
	if (name == "\0")
		throw std::invalid_argument("The name of Form cannot be empty");
	if (target == "\0")
		throw std::invalid_argument("The name of target cannot be empty");
	else if (grade > 150)
		throw GradeTooLowException();
	else if (grade <= 0)
		throw GradeTooHighException();
	else if (exec > 150)
		throw std::invalid_argument("Exec is too low");
	else if (exec <= 0)
		throw std::invalid_argument("Exec is too high");
	status = false;
	std::cout << "Form is created\n";
}

Form::~Form()
{
	std::cout << "Form is destroyed\n";
}

Form::Form(Form &obj) : name(obj.name), grade(obj.grade), exec(obj.exec)
{
	status = obj.status;
}

Form &Form::operator = (Form &obj)
{
	if (this == &obj)
		return (*this);
	this->status = obj.status;
	return (*this);
}

std::string const	&Form::getName() const
{
	return (this->name);
}

std::string const	&Form::getTarget() const
{
	return (this->target);
}

int		Form::getGrade() const
{
	return (this->grade);
}

int		Form::getExec() const
{
	return (this->exec);
}

int					Form::isSigned() const
{
	if (status == true)
		return (1);
	return (0);
}

void	Form::beSigned(Bureaucrat &obj)
{
	if (this->grade < obj.getGrade())
		throw GradeTooLowException();
	std::cout << obj.getName() << " signed " << this->name << " form\n";
	status = true;
}

std::ostream &operator << (std::ostream &out, Form &obj)
{
	out << obj.getName() << ", Grade to sign: " << obj.getGrade() << " Grade to execute: " << obj.getExec();
	return (out);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (this->isSigned() == 0)
		throw std::invalid_argument("Cannot execute. Form is not signed");
	else if (executor.getGrade() > this->getExec())
		throw std::invalid_argument("Cannot execute. Grade of executor is too low");
}
