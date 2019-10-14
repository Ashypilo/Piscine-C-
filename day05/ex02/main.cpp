/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:05:52 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/08 18:45:33 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat                    a("B1", 150);
    Bureaucrat                    b("B2", 100);
    Bureaucrat                    c("B3", 1);
    ShrubberyCreationForm         f1("F_1");
    RobotomyRequestForm           f2("F_2");
    PresidentialPardonForm        f3("F_3");


    a.signForm(f1);
    a.executeForm(f1);
    b.signForm(f1);
    b.executeForm(f1);
    c.signForm(f1);
    c.executeForm(f1);
    std::cout << std::endl;
    a.signForm(f2);
    a.executeForm(f2);
    b.signForm(f2);
    b.executeForm(f2);
    c.signForm(f2);
    c.executeForm(f2);
    std::cout << std::endl;
    a.signForm(f3);
    a.executeForm(f3);
    b.signForm(f3);
    b.executeForm(f3);
    c.signForm(f3);
    c.executeForm(f3);

    return (0);
}