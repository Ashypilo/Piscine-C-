/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassName.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:18:11 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/01 11:05:37 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_NAME_HPP
# define CLASS_NAME_HPP

# include <string>
# include <iostream>
# include <iomanip> 

const int max_contact = 8; 

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        
        std::string _first_name; 
        std::string _last_name;
        std::string _nickname;
        std::string _login;
        std::string _postal_address;
        std::string _email_address;
        std::string _phone_number;
        std::string _birthday_date;
        std::string _favorite_meal;
        std::string _underwear_color;
        std::string _darkest_secret;
};
    Contact add_contact();
    void search_in_phonebook(Contact *con, int num);

#endif