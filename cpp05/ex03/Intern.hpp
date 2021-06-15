/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:09:57 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/26 12:49:31 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
// # include "Form.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
private:
	Form *forms[4];
	Intern &operator = (Intern &obj);
public:
	Intern();
	~Intern();
	Intern(Intern &obj);
	Form *makeForm(std::string formType, std::string target);
};


#endif
