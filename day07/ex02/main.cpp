/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:43:53 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/11 18:20:47 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    srand(time(0));
    Array<int> a(5);
    Array<int> a1;

    try 
    {
        for (unsigned int i = 0; i <= a.size(); i++)
        {
            a[i] = rand() % 10;
            std::cout << a[i] << std::endl;
        }
        
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    a1 = a;
      try 
    {
        for (unsigned int i = 0; i <= a1.size(); i++)
        {
            
            std::cout << a1[i] << std::endl;
        }
        
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}