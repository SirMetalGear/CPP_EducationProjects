/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:11:29 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/24 17:20:44 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (name == "\0")
		throw std::invalid_argument("The name cannot be empty");
	else if (grade > 150)
		throw GradeTooLowException();
	else if (grade <= 0)
		throw GradeTooHighException();
	std::cout << "Bureacrat object is created\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureacrat object is destroyed\n";
}

Bureaucrat::Bureaucrat(Bureaucrat &obj) : name(obj.name)
{
	*this = obj;
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat &obj)
{
	if (this == &obj)
		return (*this);
	this->grade = obj.grade;
	return (*this);
}

std::string const	&Bureaucrat::getName() const
{
	return (this->name);
}

int		Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::gradePlus()
{
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	this->grade = this->grade - 1;
}

void	Bureaucrat::gradeMinus()
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	this->grade = this->grade + 1;
}

void	Bureaucrat::signForm(Form &obj)
{
	if (obj.isSigned() == 1)
		std::cout << this->name << " cannot sign "
		<< obj.getName() << " because grade Form is already signed\n";
	else if (this->grade > obj.getGrade())
	{
		std::cout << this->name << " cannot sign "
		<< obj.getName() << " because grade of Bureaucrat is too low\n";
	}
	else
	{
		obj.beSigned(*this);
	}
}

std::ostream &operator << (std::ostream &out, Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

void		Bureaucrat::executeForm(Form const & form)
{
	if (form.isSigned() == 0)
		std::cout << this->name << " cannot execute the Form. Form is not signed\n";
	else if (this->grade > form.getExec())
		std::cout << this->name << " cannot execute the Form. Grade is too low\n";
	else
	{
		std::cout << this->name << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
}