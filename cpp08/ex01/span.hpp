/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:51:32 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/04 14:09:54 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
	std::vector<int> array;
	size_t	length;
	size_t	filled_num;
public:
	Span();
	Span(unsigned int N);
	Span(const Span &obj);
	Span & operator =(const Span &obj);
	~Span();

	void	addNumber(int);
	template<typename T>
	void	addNumber(typename T::iterator begin, typename T::iterator end)
	{
		array.insert(array.begin(), begin, end);
		filled_num = array.size();
	}
	size_t shortestSpan();
	size_t longestSpan();
};

#endif
