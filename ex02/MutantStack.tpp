/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:56:43 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/03 21:24:19 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &mutantStack)
{
	return (std::stack<T>(mutantStack));
}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &mutantStack)
{
	return (std::stack<T>::operator=(mutantStack));
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}


