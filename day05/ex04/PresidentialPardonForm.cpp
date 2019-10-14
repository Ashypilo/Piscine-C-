/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:52:14 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/08 18:02:17 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name):Form::Form(name, 145, 137)
{
    this->target = name;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& over): Form::Form(over.getName(), 145, 137)
{
    *this = over;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& over)
{
    if (this != &over)
        Form::operator=(over);
    return (*this);
}

void PresidentialPardonForm::action() const
{
    std::cout << this->target + " has been pardoned by Zaphod Beeblebrox." << std::endl;
}