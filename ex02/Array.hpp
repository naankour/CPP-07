/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naankour <naankour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 17:01:45 by naankour          #+#    #+#             */
/*   Updated: 2025/12/08 17:04:19 by naankour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception> 

class IndexException : public std::exception
{
public:
    virtual const char* what() const throw()
    {
        return "Erreur : indice hors limites";
    }
};

template <typename T>
class Array
{
	private:
		T	*array;
		unsigned int _size;

	public:
		Array(): array(NULL), _size(0) {}

		Array(unsigned int n): array(new T[n]()), _size(n) {}

		Array(const Array<T>& other): array(NULL), _size(other._size)
		{
			if (_size > 0)
			{
				array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
				array[i] = other.array[i];
			}
		}

		Array<T>& operator=(const Array<T>& other)
		{
			if (this != &other)
			{
				delete[] array;
				array = NULL;
				_size = other._size;

			if (_size > 0)
			{
				array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
				array[i] = other.array[i];
			}
			}
			return(*this);
		}

		~Array() 
		{
			delete[] array;
		}

		T& operator[](unsigned int index)
		{
			if (index >= _size)
				throw IndexException();
			return (array[index]);
		}

		unsigned int size() const
		{
			return (_size);
		}
};

