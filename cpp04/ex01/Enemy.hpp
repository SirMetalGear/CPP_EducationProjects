/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:59:00 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/22 10:11:53 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
private:
	Enemy();
protected:
	int			hp;
	std::string	type;
public:
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &obj);
	virtual ~Enemy();

	std::string  const &getType() const;
	int getHP() const;

	virtual void takeDamage(int dmg);

	Enemy	&operator = (const Enemy &obj);
};

#endif
