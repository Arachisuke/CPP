/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 15:46:59 by macos             #+#    #+#             */
/*   Updated: 2025/05/24 16:36:27 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>


template <typename T>
class Array
{

    public :
    Array() : _data(0), _size(0) {}

    Array(unsigned int n) : _data(new T[n]()), _size(n) {}
    
    Array(const Array &other) : _data(0), _size(0)
    {
        *this = other; // utilise l'opertor d'affectation.
    }
    
    ~Array()
    {
        delete[] _data;
    }
    
    Array  &operator=(const Array &rhs) // deep copy a faire.
    {
        if (this != &rhs)
            delete[] _data;
        _size = rhs._size;
        _data = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
        _data[i] = rhs._data[i];

        return *this;
    }
    
    T &operator[](unsigned int index)
    {
       if (index >= _size)
            throw std::out_of_range("Index out of bounds");
        return _data[index];
    }
    
    const T &operator[](unsigned int index) const 
    {
        if (index >= _size)
             throw std::out_of_range("Index out of bounds");
        return _data[index];
    }
    unsigned int size() const 
    {
        return _size;
    }
    private :
    
    T *_data;
    unsigned int _size;
};
