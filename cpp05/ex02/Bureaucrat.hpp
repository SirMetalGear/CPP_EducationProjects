/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:11:35 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/26 12:48:45 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class	Form;
# include "Form.hpp"

class	Bureaucrat
{
private:
	const std::string	name;
	int					grade;
	Bureaucrat();
	Bureaucrat &operator = (Bureaucrat &obj);
public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat &obj);
	std::string const	&getName() const;
	int					getGrade() const;
	void				gradePlus();
	void				gradeMinus();
	void				signForm(Form &obj);
	void				executeForm(Form const & form);

	class GradeTooHighException : public std::exception
	{
	public:
		const char * what () const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char * what () const throw();
	};
};

std::ostream &operator << (std::ostream &out, Bureaucrat &obj);

#endif
