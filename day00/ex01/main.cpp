/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:18:48 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/01 11:11:05 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassName.hpp"

int main()
{
    std::string buf;
    Contact con[max_contact];
    int num;

    num = 0;
    std::cout << "Please write request: " << std::endl;
    std::cout << "ADD" << std::endl;
    std::cout << "SEARCH" << std::endl;
    std::cout << "EXIT" << std::endl;
    while (1)
    {
        getline(std::cin, buf, '\n');
        if (buf == "ADD")
        {
            if (num < max_contact)
                con[num++] = add_contact();
            else
                std::cout << "Phonebook is full" << std::endl;
        }
        else if (buf == "SEARCH")
        {
            if (num > 0)
                search_in_phonebook(con, num - 1);
            else
                std::cout << "Phonebook is empty" << std::endl;
        }
        else if (buf == "EXIT")
            break ;
        std::cin.clear();
    }
    return (0);
}
