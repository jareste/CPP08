/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:34:01 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/03 20:51:16 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <set>
# include <iostream>
# include <exception>
# include <stdexcept>

class Span
{
	private:
		unsigned int	size;
		std::multiset<int>	*arr;
		unsigned int	idx;
	public:
		Span();
		Span(unsigned int n);
		Span( const Span &span );
		~Span();
		Span	&operator=( const Span& span );
		void			addNumber(unsigned int n);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		unsigned int	getSize() const;
		unsigned int	getIdx() const;
};

#endif
