/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:10:59 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/05 14:39:06 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
    this->name = "ZERO";
    std::cout << "Some random victim called " + this->name + " just popped !" << std::endl;
    return ;
}

Victim::Victim(std::string name)
{
    this->name = name;
    std::cout << "Some random victim called " + this->name + " just popped !" << std::endl;
    return ;
}

Victim::Victim(const Victim& copy)
{
    std::cout << "Copy call" << std::endl;
    *this = copy;
    return ;
}

Victim::~Victim()
{
    std::cout << "Victim " + this->name + " just died for no apparent reason !" << std::endl;
    return ;
}

Victim& Victim::operator=(const Victim& over)
{
     if (this != &over)
        this->name = over.name;
    return (*this);
}

std::ostream& operator<<(std::ostream &out, const Victim &vic)
{
    out << "I'm " + vic.getName() + " and I like otters !" << std::endl;
    return (out);
}

void Victim::getPolymorphed() const
{
    std::cout << this->getName() + " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName() const
{
    return (this->name);
}