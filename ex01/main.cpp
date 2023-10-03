/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:35:31 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/03 20:54:24 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span k(4);

	try
	{
		k.addNumber(5);
		k.addNumber(100201);
		k.addNumber(5);
		k.addNumber(90);
		int j = k.longestSpan();
		std::cout << k.shortestSpan() << std::endl;
		std::cout << j << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}



	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

}
