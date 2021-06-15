/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:09:13 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/26 12:49:05 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class	RobotomyCreationForm : public Form
{
private:
	RobotomyCreationForm();
	RobotomyCreationForm &operator = (RobotomyCreationForm &obj);
public:
	RobotomyCreationForm(std::string target);
	virtual ~RobotomyCreationForm();
	RobotomyCreationForm(RobotomyCreationForm &obj);
	virtual void	execute(Bureaucrat const & executor) const;
};

std::ostream &operator << (std::ostream &out, RobotomyCreationForm &obj);

#endif