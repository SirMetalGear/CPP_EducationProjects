/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:58:35 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/12 13:04:54 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#ifndef HUMAN_HPP
# define HUMAN_HPP

class Human
{
private:
	const Brain a;
public:
	Human();
	~Human();
	std::string	identify() const;
	const Brain &getBrain() const;
};

#endif
