/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:10:49 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/19 15:43:26 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class Victim
{
protected:
	std::string name;
public:
	Victim(const std::string &name);
	Victim(const Victim &obj);
	Victim();
	virtual ~Victim();

	virtual void getPolymorphed() const;
	const std::string	introduce();
	Victim	&operator = (const Victim &obj);
};
	std::ostream &operator << (std::ostream &out, Victim &obj);

#endif
