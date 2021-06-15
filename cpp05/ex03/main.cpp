/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:11:40 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/26 12:52:23 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	test1()
{
	try
	{
		Bureaucrat bob("Bob The King", 1);
		Intern someRandomIntern;

		std::cout << "\nROBOTOMY CHECK\n";
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << " Target: " << rrf->getTarget() << std::endl;
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf;

		std::cout << "\nNO TYPE CHECK\n";
		Form* rrf2;
		rrf2 = someRandomIntern.makeForm("", "ocelot");
		Form* rrf3;

		std::cout << "\nPRESIDENTIAL CHECK\n";
		rrf3 = someRandomIntern.makeForm("presidential pardon", "Finn");
		std::cout << *rrf3 << " Target: " << rrf3->getTarget() << std::endl;
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf3;

		std::cout << "\nSHRUBERY CHECK\n";
		Form* rrf4;
		rrf4 = someRandomIntern.makeForm("shrubery creation", "Jake");
		std::cout << *rrf4 << " Target: " << rrf4->getTarget() << std::endl;
		delete rrf4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	test2()
{
	try
	{
		Bureaucrat bob("Bob The Loser", 150);
		Intern someRandomIntern;

		std::cout << "\nROBOTOMY CHECK\n";
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << " Target: " << rrf->getTarget() << std::endl;
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf;

		std::cout << "\nNO TYPE CHECK\n";
		Form* rrf2;
		rrf2 = someRandomIntern.makeForm("", "ocelot");
		Form* rrf3;

		std::cout << "\nPRESIDENTIAL CHECK\n";
		rrf3 = someRandomIntern.makeForm("presidential pardon", "Finn");
		std::cout << *rrf3 << " Target: " << rrf3->getTarget() << std::endl;
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf3;

		std::cout << "\nSHRUBERY CHECK\n";
		Form* rrf4;
		rrf4 = someRandomIntern.makeForm("shrubery creation", "Jake");
		std::cout << *rrf4 << " Target: " << rrf4->getTarget() << std::endl;
		delete rrf4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	test3PointerLosing()
{
	Bureaucrat *bob = new Bureaucrat("Bob The King", 1);
	try
	{
		ShrubberyCreationForm a("Factory");
		a.beSigned(*bob);
		bob->executeForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete bob;
}

void	test4PointerLosing()
{
	Bureaucrat *bob = new Bureaucrat("Bob The Loser", 150);
	Form *a = 0;
	try
	{
		a = new ShrubberyCreationForm("Factory");
		a->beSigned(*bob);
		bob->executeForm(*a);
		delete a;
	}
	catch(const std::exception& e)
	{
		if (a != 0)
			delete a;
		std::cerr << "EXCEPTION HAS BEEN CAUGHT! " << e.what() << '\n';
	}
	delete bob;
}

int	main()
{
	// test1();
	// test2();
	// test3PointerLosing();
	test4PointerLosing();
	// while (1);
	return (0);
}