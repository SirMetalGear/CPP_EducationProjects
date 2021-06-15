/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:11:29 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/26 12:59:18 by mlorette         ###   ########.fr       */
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

int		Bureaucrat::getGrade()
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
