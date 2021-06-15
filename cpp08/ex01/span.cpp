/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:51:37 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/04 14:10:00 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
	this->length = 0;
	this->filled_num = 0;
}

Span::Span(unsigned int N)
{
	if (N == 0)
		throw std::invalid_argument("Parameter can't be 0");
	this->length = N;
	this->filled_num = 0;
}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span &Span::operator = (const Span &obj)
{
	if (this == &obj)
		return (*this);
	this->array = obj.array;
	this->length = obj.length;
	this->filled_num = obj.filled_num;
	return (*this);
} 

Span::~Span()
{}

void	Span::addNumber(int num)
{
	if (filled_num + 1 > length)
		throw std::invalid_argument("Array is full already");
	this->array.push_back(num);
	filled_num = filled_num + 1;
}

size_t	Span::shortestSpan()
{
	if (filled_num <= 1)
		throw std::invalid_argument("Array is not filled enough");
	std::sort(array.begin(), array.end());
	return (array[1] - *array.begin());
}

size_t	Span::longestSpan()
{
	if (filled_num <= 1)
		throw std::invalid_argument("Array is not filled enough");
	std::sort(array.begin(), array.end());
	return (*(array.end() - 1) - *array.begin());
}
