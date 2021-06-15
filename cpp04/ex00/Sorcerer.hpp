/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:11:00 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/19 14:24:51 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class Sorcerer
{
private:
	std::string name;
	std::string title;
	Sorcerer();
public:
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer(const Sorcerer &obj);
	~Sorcerer();
	void				polymorph(Victim const &obj) const;
	const std::string	introduce();
	Sorcerer	&operator = (const Sorcerer &obj);
};
	std::ostream &operator << (std::ostream &out, Sorcerer &obj);

#endif

