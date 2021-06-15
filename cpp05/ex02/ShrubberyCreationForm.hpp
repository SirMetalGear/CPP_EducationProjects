/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 22:48:17 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/26 12:49:14 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
	ShrubberyCreationForm &operator = (ShrubberyCreationForm &obj);
public:
	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm &obj);
	virtual void	execute(Bureaucrat const & executor) const;
};

std::ostream &operator << (std::ostream &out, ShrubberyCreationForm &obj);

#endif
