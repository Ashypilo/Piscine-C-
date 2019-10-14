/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:12:31 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/11 14:45:30 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> arr;
    for (int i = 0; i < 10; i++)
    {
        arr.push_back(i);
    }

try
{

    std::cout << *easyfind(arr, 9) << std::endl;
}
catch (std::exception& e)
{
    std::cout << e.what() << std::endl;
}

    return (0);
}