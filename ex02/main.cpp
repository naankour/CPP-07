/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naankour <naankour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 17:01:42 by naankour          #+#    #+#             */
/*   Updated: 2025/12/08 17:06:31 by naankour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main ()
{
	int * a = new int();
	std::cout << *a << std::endl;
	std::cout << std::endl;

	Array<int> b;
	Array<int> arr(3);
	
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;

	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;
	std::cout << arr[2] << std::endl;
	std::cout << std::endl;

	int x = arr[1];
	std::cout << x << std::endl;
	std::cout << std::endl;

	std::cout << arr.size() << std::endl;
}