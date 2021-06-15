/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:06:38 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/24 18:04:06 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), grade(0), exec(0)
{}

Form::Form(std::string name, int grade, int exec) : name(name), grade(grade), exec(exec)
{
	(void)exec;
	if (name == "\0")
		throw std::invalid_argument("The name of Form cannot be empty");
	else if (grade > 150 || exec > 150)
		throw GradeTooLowException();
	else if (grade <= 0 || exec <= 0)
		throw GradeTooHighException();
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

int		Form::getGrade() const
{
	return (this->grade);
}

int					Form::isSigned()
{
	if (status == true)
		return (1);
	return (0);
}

void	Form::beSigned(Bureaucrat &obj)
{
	if (this->grade < obj.getGrade())
		throw GradeTooLowException();
	status = true;
}

int		Form::getExec() const
{
	return (this->exec);
}

std::ostream &operator << (std::ostream &out, Form &obj)
{
	out << obj.getName() << ", Grade to sign: " << obj.getGrade() << " Grade to execute: " << obj.getExec();
	return (out);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade is too low");
}
