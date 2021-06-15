/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:06:32 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/26 12:48:32 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

class	Bureaucrat;
# include "Bureaucrat.hpp"

class	Form
{
private:
	const std::string	name;
	const int			grade;
	const int			exec;
	bool				status;
	Form();
	Form &operator = (Form &obj);
public:
	Form(std::string name, int grade, int exec);
	~Form();
	Form(Form &obj);
	std::string const	&getName() const;
	int					getGrade() const;
	int					getExec() const;
	void				beSigned(Bureaucrat &obj);
	int					isSigned();

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

std::ostream &operator << (std::ostream &out, Form &obj);

#endif
