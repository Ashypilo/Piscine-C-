/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:05:52 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/09 13:40:41 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
    Intern idiotOne;
    Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
    Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
    OfficeBlock ob;

    ob.setIntern(idiotOne);
    ob.setSigner(bob);
    ob.setExecutor(hermes);

    try
    {
        ob.doBureaucracy("presidential pardon", "Pigley");
    }
    catch (std::exception & e)
    {
        std::cout <<e.what() << std::endl;
    }
    return (0);
}