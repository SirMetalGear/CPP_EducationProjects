/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:11:40 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/26 12:52:04 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	test1Shrubbery()
{
	try
	{
		std::string target("Home");
		Bureaucrat bob("Bob The Mighty", 1);
		ShrubberyCreationForm shrub(target);
		shrub.beSigned(bob);
		std::cout << shrub  << std::endl;
		shrub.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	test2Shrubbery()
{
	try
	{
		std::string target("supermarket");
		Bureaucrat bob("Bob The Mighty", 1);
		ShrubberyCreationForm shrub(target);
		shrub.beSigned(bob);
		std::cout << shrub  << std::endl;
		bob.executeForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	test1Robotomy()
{
	try
	{
		std::string target("supermarket");
		Bureaucrat bob("Bob The Mighty", 72);
		RobotomyCreationForm robo(target);
		robo.beSigned(bob);
		std::cout << robo  << std::endl;
		bob.executeForm(robo);
		robo.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION HAS BEEN CAUGHT: "<< e.what() << '\n';
	}
}

void	test2Robotomy()
{
	try
	{
		std::string target("Hola");
		Bureaucrat bob("Bob The Mighty", 1);
		RobotomyCreationForm robo(target);
		robo.beSigned(bob);
		std::cout << robo  << std::endl;
		bob.executeForm(robo);
		robo.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION HAS BEEN CAUGHT: "<< e.what() << '\n';
	}
}

void	test1Presidental()
{
	try
	{
		std::string target("supermarket");
		Bureaucrat bob("Bob The Mighty", 1);
		PresidentialPardonForm pres(target);
		pres.beSigned(bob);
		std::cout << pres  << std::endl;
		bob.executeForm(pres);
		pres.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION HAS BEEN CAUGHT: "<< e.what() << '\n';
	}
}

void	test2Presidental()
{
	try
	{
		std::string target("supermarket");
		Bureaucrat bob("Bob The Mighty", 25);
		PresidentialPardonForm pres(target);
		pres.beSigned(bob);
		std::cout << pres  << std::endl;
		bob.executeForm(pres);
		pres.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION HAS BEEN CAUGHT: "<< e.what() << '\n';
	}
}

int	main()
{

	test1Shrubbery();
	test2Shrubbery();
	test1Robotomy();
	test2Robotomy();
	test1Presidental();
	test2Presidental();
	// while(1);
	return (0);
}