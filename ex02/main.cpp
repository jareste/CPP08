/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:35:31 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/03 21:31:45 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> bob;

	bob.push(2);
	bob.push(5);
	bob.push(7);
	bob.push(8);
	bob.push(9);
	bob.push(6);
	bob.push(4);

	MutantStack<int>::iterator it = bob.begin();

	std::cout << *it << " " << bob.top() << std::endl;
	std::cout << *std::prev(bob.end()) << std::endl;

}
