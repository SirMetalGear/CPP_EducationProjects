/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:58:23 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/12 12:59:17 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{}

Brain::~Brain()
{}

std::string Brain::identify() const
{
	std::stringstream ss;
	ss << this;
	std::string adr = ss.str();
	return (adr);
}
