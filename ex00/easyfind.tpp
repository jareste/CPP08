/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:37:55 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/03 16:31:34 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
int	easyfind(T &arr, int find)
{
	if (std::find(arr.begin(), arr.end(), find) == arr.end())
		throw std::invalid_argument("Integer not found.");
	return (find);
}
