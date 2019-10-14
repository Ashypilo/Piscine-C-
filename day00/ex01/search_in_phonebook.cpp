/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_in_phonebook.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:18:21 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/01 14:35:03 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassName.hpp"

void    output_index_contact(Contact *con, int num)
{
    int i;

    std::cout << "Please write index of a contact:";
    std::cin >> i;
    if (i <= num)
    {
        std::cout << con[i]._first_name << std::endl;
        std::cout << con[i]._last_name << std::endl;
        std::cout << con[i]._nickname << std::endl;
        std::cout << con[i]._login << std::endl;
        std::cout << con[i]._postal_address << std::endl;
        std::cout << con[i]._email_address << std::endl;
        std::cout << con[i]._phone_number << std::endl;
        std::cout << con[i]._birthday_date << std::endl;
        std::cout << con[i]._favorite_meal << std::endl;
        std::cout << con[i]._underwear_color << std::endl;
        std::cout << con[i]._darkest_secret << std::endl;
    }
    else
        std::cout << "Index is not corect" << std::endl;
}

std::string resize_string(std::string str)
{
    if (str.length() > 10)
    {
        str.resize(9);
        str.append(".");
    }
    return (str);
}

void search_in_phonebook(Contact *con, int num)
{

    std::cout << "|     Index|First name| Last name|  Nickname" << std::endl;
    for (int i = 0; i <= num; i++)
    {
        std::cout << "|";
        std::cout << std::setw(10);
        std::cout << i;
        std::cout << "|";
        std::cout << std::setw(10);
        std::cout << resize_string(con[i]._first_name);
        std::cout << "|";
        std::cout << std::setw(10);
        std::cout << resize_string(con[i]._last_name);
        std::cout << "|";
        std::cout << std::setw(10);
        std::cout << resize_string(con[i]._nickname) << std::endl;
    }
    output_index_contact(con, num);
    return ;
}