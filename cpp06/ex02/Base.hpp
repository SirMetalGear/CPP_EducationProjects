/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:34:51 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/30 18:48:16 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

#endif
