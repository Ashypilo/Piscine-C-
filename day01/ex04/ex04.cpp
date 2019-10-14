/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:38:59 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/01 12:40:45 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *point = &str;
    std::string &ref = str;

    std::cout << "Pointer: " << *point << std::endl;
    std::cout << "Reference: " << ref << std::endl;
    return (0);
}