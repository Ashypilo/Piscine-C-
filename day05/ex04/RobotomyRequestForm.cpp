/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:52:33 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/08 18:02:18 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name):Form::Form(name, 145, 137)
{
    this->target = name;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& over): Form::Form(over.getName(), 145, 137)
{
    *this = over;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& over)
{
    if (this != &over)
        Form::operator=(over);
    return (*this);
}

void RobotomyRequestForm::action() const 
{
    if (rand() % 2)
        std::cout << "bz....bz....bz.... " << this->target + " has been robotomized" << std::endl;
    else
        std::cout << "It’s a failure" << std::endl;
}