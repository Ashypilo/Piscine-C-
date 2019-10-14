/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:12:26 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/11 14:45:17 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <iostream>
#include <exception>
#include <list>
#include <vector>

template<typename T>
typename T::iterator easyfind(T arr, int n)
{
    typename T::iterator begin = arr.begin();
    typename T::iterator end = arr.end();
    
    while (begin != end)
    {
        if (*begin == n)
            return (begin);
        begin++;
    }
    throw std::exception();
    return (end);
}   

#endif