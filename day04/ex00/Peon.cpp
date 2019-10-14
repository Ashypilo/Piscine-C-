/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:10:34 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/05 14:38:55 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
    std::cout << "Zog zog." << std::endl;
    return ;
}

Peon::Peon(std::string name): Victim::Victim(name)
{
    this->name = name;
    std::cout << "Zog zog." << std::endl;
    return ;
}

Peon::Peon(const Peon& copy)
{
    std::cout << "Copy call" << std::endl;
    *this = copy;
    return ;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
    return ;
}

Peon& Peon::operator=(const Peon& over)
{
     if (this != &over)
        this->name = over.name;
    return (*this);
}

std::ostream& operator<<(std::ostream &out, const Peon &peo)
{
    out << "I'm " + peo.getName() + " and I like otters !" << std::endl;
    return (out);
}

void Peon::getPolymorphed() const
{
    std::cout << this->getName() + " has been turned into a pink pony !" << std::endl;
}


