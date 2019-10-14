/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:17:43 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/01 11:05:39 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassName.hpp"

Contact::Contact(void) 
{ 
    return ; 
}
Contact::~Contact(void)
{ 
    return ; 
}

Contact add_contact()
{
    Contact new_contact;
    std::string buf;
    
    std::cout << "First name: ";
    std::cin >> buf;
    new_contact._first_name = buf;
    std::cout << "Last name: ";
    std::cin >> buf;
    new_contact._last_name = buf;
    std::cout << "Nickname: ";
    std::cin >> buf;
    new_contact._nickname = buf;
    std::cout << "Login: ";
    std::cin >> buf;
    new_contact._login = buf;
    std::cout << "Postal address: ";
    std::cin >> buf;
    new_contact._postal_address = buf;
    std::cout << "Email address: ";
    std::cin >> buf;
    new_contact._email_address = buf;
    std::cout << "Phone number: ";
    std::cin >> buf;
    new_contact._phone_number = buf;
    std::cout << "Birthday date: ";
    std::cin >> buf;
    new_contact._birthday_date = buf;
    std::cout << "Favorite meal: ";
    std::cin >> buf;
    new_contact._favorite_meal = buf;
    std::cout << "Underwear color: ";
    std::cin >> buf;
    new_contact._underwear_color = buf;
    std::cout << "Darkest secret: ";
    std::cin >> buf;
    new_contact._darkest_secret = buf;
    std::cout << "Input data completed" << std::endl;

    return (new_contact);
} 