/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:58:29 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/12 13:04:50 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{}

Human::~Human()
{}

std::string	Human::identify() const
{
	return (this->a.identify());
}

const Brain &Human::getBrain() const
{
	return (this->a);
}
