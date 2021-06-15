/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:09:13 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/26 12:49:41 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
	RobotomyRequestForm &operator = (RobotomyRequestForm &obj);
public:
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm &obj);
	RobotomyRequestForm(RobotomyRequestForm &obj, std::string &);
	virtual void	execute(Bureaucrat const & executor) const;
	virtual	Form	*clone(std::string &);
};

std::ostream &operator << (std::ostream &out, RobotomyRequestForm &obj);

#endif