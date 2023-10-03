/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:37:36 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/03 16:31:38 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"


int main()
{
	std::vector<int> vec;
	for (int j = 0; j < 5; j++)
		    vec.push_back(j + 1);
	int i = 0;
	try
	{
		i = easyfind(vec, 5);
		std::cout << i << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}

}
