/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:14:54 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/03 16:49:55 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <vector>

template<typename T>
typename T::iterator easyfind(T &obj, int const to_find)
{
	typename T::iterator begin = obj.begin();
	typename T::iterator end = obj.end();
	typename T::iterator found = std::find(begin, end, to_find);
	if (found == end)
		throw std::exception();
	else
		return found;
}

// EASY FIND FOR ANY TYPE
// template<typename T, typename F>
// typename T::iterator easyfind(T &obj, F const &to_find)
// {
// 	typename T::iterator begin = obj.begin();
// 	typename T::iterator end = obj.end();
// 	typename T::iterator found = std::find(begin, end, to_find);
// 	if (found == end)
// 		throw std::exception();
// 	else
// 		return found;
// }

#endif
