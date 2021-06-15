/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:18:22 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/26 12:49:37 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
	PresidentialPardonForm &operator = (PresidentialPardonForm &obj);
public:
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm &obj);
	PresidentialPardonForm(PresidentialPardonForm &obj, std::string &target);
	virtual void	execute(Bureaucrat const & executor) const;
	virtual	Form	*clone(std::string &);
};

std::ostream &operator << (std::ostream &out, PresidentialPardonForm &obj);

#endif
