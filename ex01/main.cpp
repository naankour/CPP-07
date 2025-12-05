/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naankour <naankour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 11:58:06 by naankour          #+#    #+#             */
/*   Updated: 2025/12/05 18:10:19 by naankour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(int x)
{
	std::cout << x << std::endl;
}

void printChar(char c)
{
	std::cout << c << std::endl;
}

template <typename T>
void printTemplate(const T &x)
{
    std::cout << x << std::endl;
}

int main()
{
	int array[] = {0, 1, 2, 3};
	int length = 4;

	char array2[] = {'a', 'b', 'c', 'd', 'e'};
	int length2 = 5;

	const int constArray[] = {42, 24, 84};
    int length3 = 3;

	iter(array, length, printInt);
	std::cout << std::endl;

	iter(array2, length2, printChar);
	std::cout << std::endl;

	iter(array2, length2, printTemplate<char>);
	std::cout << std::endl;

	iter(constArray, length3, printTemplate<int>);
	std::cout << std::endl;


	return(0);
}