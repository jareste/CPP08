/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:56:43 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/03 21:24:37 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &mutantStack);
		~MutantStack();
		MutantStack &operator=(const MutantStack &mutantStack);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin();
		iterator end();
};

# include "MutantStack.tpp"

#endif
