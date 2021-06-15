/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:18:22 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/26 12:48:58 by mlorette         ###   ########.fr       */
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
	virtual void	execute(Bureaucrat const & executor) const;
};

std::ostream &operator << (std::ostream &out, PresidentialPardonForm &obj);

#endif