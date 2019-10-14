/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:04:09 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/10 17:03:24 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"
#include <iomanip>

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "Please write string" << std::endl;
    else
    {
        Scalar str(argv[1]);
        std::cout << "char: ";
        try 
        {
            char out = static_cast<char>(str);
            std::cout << "'" << out << "'" << std::endl;
        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "int: ";
        try 
        {
            std::cout << static_cast<int>(str) << std::endl;
        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "float: ";
        try 
        {
            float out = static_cast<float>(str);
            std::cout << std::fixed << std::setprecision(1) << out << 'f' << std::endl;
        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "double: ";
        try 
        {
            double out = static_cast<double>(str);
            std::cout << std::fixed << std::setprecision(1) << out << std::endl;
        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}