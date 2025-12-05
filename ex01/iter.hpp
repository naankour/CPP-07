/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naankour <naankour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 11:57:55 by naankour          #+#    #+#             */
/*   Updated: 2025/12/05 18:07:17 by naankour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T, typename L, typename F>

void iter(T* array, const L length, F function)
{
	// if (!array)
	// 	return;
	for (L i = 0; i < length; i++)
		function(array[i]);
}

template <typename T, typename L, typename F>

void iter(const T* array, const L length, F function)
{
	// if (!array)
	// 	return;
	for (L i = 0; i < length; i++)
		function(array[i]);
}
