/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:04:02 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/11 17:39:22 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>


class Span
{
    public:
    Span();
    Span(unsigned int);
    Span(const Span&);
    ~Span();
    Span& operator=(const Span&);

    void addNumber(unsigned int n);
    int shortestSpan();
    int longestSpan();

    private:
    std::vector<int> _vector;
    unsigned int N;
    unsigned int size;
};

#endif