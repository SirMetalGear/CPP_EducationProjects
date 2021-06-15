/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:28:11 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/09 12:53:38 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIHORDE_HPP
# define ZOMBIHORDE_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieHorde
{
private:
	int		N;
	Zombie	*horde;
public:
	ZombieHorde(int N);
	~ZombieHorde();
	void	announce();
};

#endif
