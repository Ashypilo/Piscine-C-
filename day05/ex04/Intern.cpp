/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:15:18 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/09 11:48:45 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    return ;
}

Intern::Intern(const Intern& over)
{
    *this = over;
    return ;
}

Intern::~Intern()
{
    return ;
}

Intern& Intern::operator=(const Intern& over)
{
    (void)over;
    return (*this);
}

Form* Intern::makeForm(std::string name, std::string target)
{
    Form *f;
    try
    {
        if (name == "presidential pardon")
        {
            f = new PresidentialPardonForm(target);
            std::cout << "Intern creates " + name + " form" << std::endl;
            return (f);
        }
        else if (name == "roboto my request")
        {
            f = new RobotomyRequestForm(target);
            std::cout << "Intern creates " + name + " form" << std::endl;
            return (f);
        }
        else if (name == "shrubbery creation")
        {
            f = new ShrubberyCreationForm(target);
            std::cout << "Intern creates " + name + " form" << std::endl;
            return (f);
        }
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << " Does not malloc" << std::endl;
    }
    std::cout << "Intern does not creates " + name + " form" << std::endl;
    return (NULL);
}

