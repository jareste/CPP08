/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:34:05 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/03 20:52:26 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0), idx(0)
{
	this->arr = NULL;
}

Span::Span(unsigned int n) : idx(0)
{
	this->size = n;
	arr = new std::multiset<int>[n];
}

Span::Span( const Span &span )
{
	this->size = span.getSize();
	this->idx = span.getIdx();
	arr = new std::multiset<int>[this->size];
	this->arr->insert(span.arr->begin(), span.arr->end());
}

Span::~Span()
{
	delete [] arr;
}

Span	&Span::operator=( const Span& span )
{
	if (size > 0)
		delete [] arr;
	this->size = span.getSize();
	arr = new std::multiset<int>[this->size];
	this->arr->insert(span.arr->begin(), span.arr->end());
	return (*this);
}

void			Span::addNumber(unsigned int n)
{
	if (idx >= size)
		throw std::out_of_range("Failed to addNumber due to array being full.");
	this->arr->insert(n);
	idx++;
}

unsigned int	Span::shortestSpan()
{
	if (this->arr->size() < 2)
		throw std::length_error("Container has less than 2 arguments, shortestSpan not possible.");
	int	shortSpan = *std::next(this->arr->begin()) - *this->arr->begin(); 
	int	actual;
	int	prev = *this->arr->begin();
	int diff;

	for (std::multiset<int>::iterator it = std::next(this->arr->begin()); it != this->arr->end(); ++it)
	{
		actual = *it;
		diff = actual - prev;
		if (diff < shortSpan)
			shortSpan = diff;
		prev = *it;
	}     
	return (shortSpan);
}

unsigned int	Span::longestSpan()
{
	if (this->arr->size() < 2)
		throw std::length_error("Container has less than 2 arguments, longestSpan not possible.");
	int	first = *this->arr->begin();
	int	last = *std::prev(this->arr->end());
	return (last - first);
}

unsigned int	Span::getSize() const
{
	return (this->size);
}

unsigned int	Span::getIdx() const
{
	return (this->idx);
}
