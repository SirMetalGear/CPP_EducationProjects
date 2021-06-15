/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 22:50:12 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/24 17:13:36 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 0, 0, "")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubery creation",  145, 137, target)
{
	if (target == "\0")
		throw std::invalid_argument("Target name cannot be empty");
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj) : Form("shrubery creation",  145, 137, obj.getTarget())
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj, std::string &target) : Form(obj.getName(),  145, 137, target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm &obj)
{
	if (this == &obj)
		return (*this);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	if (this->isSigned() == 1 && executor.getGrade() < this->getExec())
	{
		std::string tmp("     .{{}}}}}}.\n    {{{{{{(`)}}}.\n   {{{(`)}}}}}}}}}\n  }}}}}}}}}{{(`){{{\n  }}}}{{{{(`)}}{{{{\n {{{(`)}}}}}}}{}}}}}\n{{{{{{{{(`)}}}}}}}}}}\n{{{{{{{}{{{{(`)}}}}}}\n {{{{{(`)   {{{{(`)}\'\n  `\"\"\'\" |   | \"\'\"\'`\n  (`)  /     \\\n ~~~~~~~~~~~~~~~~~~~)");
		std::ofstream outfile(this->getTarget() + "_shrubbery");
		outfile << tmp;
		outfile.close();
		std::cout << "Execution is done!\n";
	}
}

std::ostream &operator << (std::ostream &out, ShrubberyCreationForm &obj)
{
	out << "Form: " << obj.getName() << ". Grade to sign: "
	<< obj.getGrade() << ". Grade to execute: " << obj.getExec() << ". This Form needs to plant a shrubbery.";
	return (out);
}

Form				*ShrubberyCreationForm::clone(std::string &target)
{
	Form *a = new ShrubberyCreationForm(*this, target);
	return (a);
}
