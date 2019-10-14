/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:03:55 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/11 19:01:35 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
    
}

Span::Span(unsigned int N)
{ 
    this->N = N;
    this->size = N;
    this->_vector.reserve(N);
}

Span::Span(const Span& over)
{
    this->N = over.N;
    this->size = over.size;
    this->_vector.reserve(over.N);
    *this = over;
}

Span::~Span()
{

}

Span& Span::operator=(const Span& over)
{
    if (this != &over)
    {
        this->_vector = over._vector;
        this->N = over.N;
        this->size = over.size;
    }
    return (*this);
}

void Span::addNumber(unsigned int n)
{
    if (this->size == 0)
        throw std::exception();
    this->_vector.push_back(n);
    this->size--;
}

int Span::shortestSpan()
{
    int out = 0;
    
    if (this->_vector.max_size() != 0)
    {
        if (this->size == this->N || this->size < 2)
            throw std::exception();
        std::sort(this->_vector.begin(), this->_vector.end());
        for (unsigned int i = 0; i < (this->size - 1); i++)
        {
            if (out == 0)
                out = this->_vector[i + 1] - this->_vector[i];
            else if (out > (this->_vector[i + 1] - this->_vector[i]))
                out = this->_vector[i + 1] - this->_vector[i];
        }
            return (out);
    }
    return (0);
}

int Span::longestSpan()
{
    int min = 0;
    int max = 0;

    if (this->_vector.max_size() != 0)
    {
        if (this->size == this->N || this->size < 2) 
            throw std::exception();
        for (unsigned int i = 0; i <= this->size; i++)
        {
            if (min == 0)
                min = this->_vector[i];
            else if (min > this->_vector[i])
                min = this->_vector[i];
            if (max == 0)
                max = this->_vector[i];
            else if (max < this->_vector[i])
                max = this->_vector[i];
        }
        return (max - min);
    }
    return (0);
}


