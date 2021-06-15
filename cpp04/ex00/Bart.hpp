/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bart.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:45:22 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/19 15:55:47 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BART_HPP
# define BART_HPP

# include "Victim.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class Bart : virtual public Victim
{
public:
	Bart(const std::string &name);
	Bart(const Bart &obj);
	Bart();
	virtual ~Bart();

	virtual void getPolymorphed() const;
	Bart	&operator = (const Bart &obj);
};

#endif
