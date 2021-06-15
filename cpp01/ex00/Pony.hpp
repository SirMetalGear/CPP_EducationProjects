/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:35:44 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/08 14:49:20 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <iostream>
# include <string>

class	Pony
{
	private:
		std::string	name;
		std::string	color;
	public:
		Pony(std::string name, std::string color);
		~Pony();
		void	say_hello();
};

#endif
