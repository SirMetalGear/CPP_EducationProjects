/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:11:10 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/19 15:43:13 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class Peon : virtual public Victim
{
public:
	Peon(const std::string &name);
	Peon(const Peon &obj);
	Peon();
	virtual ~Peon();

	virtual void getPolymorphed() const;
	Peon	&operator = (const Peon &obj);
};

#endif
