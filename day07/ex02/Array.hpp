/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:43:03 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/11 11:31:03 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    public:
    Array<T>()
    {
        arr = new T;
        n = 0;
    }

    Array<T>(unsigned int n)
    {
        arr = new T[n];
        this->n = n;
        for (unsigned int i = 0; i < n; i++)
            this->arr[i] = 0;
    }

    Array<T>(const Array& over)
    {
        this->n = over.n;
        this->arr = new T[over.n];
        for (unsigned int i = 0; i < over.n; i++)
        {
            this->arr[i] = over.arr[i];
        }
    }

    ~Array<T>()
    {
        if (this->arr)
            delete [] this->arr;
    }

    Array<T>& operator=(const Array& over)
    {
        if (this != &over)
        {
            this->n = over.n;
            delete this->arr;
            this->arr = new T[over.n];
            for (unsigned int i = 0; i < n; i++)
                this->arr[i] = over.arr[i];
        }
        return (*this);
    }

    T& operator[](const unsigned int n)
    {
        if (n >= this->n)
            throw std::exception();
        return (this->arr[n]);
    }

    unsigned int size() const
    {
        return (this->n);
    }
    
    private:
    T* arr;
    unsigned int n;

};


#endif