/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:05:52 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/08 14:50:05 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
int main()
{

    Bureaucrat a("one", 50);
    try
    {
        Bureaucrat b("two", -3);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat c("three", 160);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << a;
    try
    {
        for (int i = 52; i > 0; i--)
            a.GradeMinus();
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat d("four", 140);
        for (int i = 0; i < 160; i++)
            d.GradePlus();
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}