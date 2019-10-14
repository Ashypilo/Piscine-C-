/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:10:46 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/06 16:58:19 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
    this->name = "ZERO";
    this->title = "ZERO";
    std::cout << this->name + ", " + this->title + ", is born !" << std::endl;
    return ;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name + ", " + this->title + ", is born !" << std::endl;
    return ;
}

Sorcerer::Sorcerer(const Sorcerer& copy)
{
    std::cout << "Copy call" << std::endl;
    *this = copy;
    return ;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name + ", " + this->title + ", is dead. Consequences will never be the same !" << std::endl;
    return ;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& over)
{
    if (this != &over)
    {
        this->name = over.name;
        this->title = over.title;
    }
    return (*this);
}

std::ostream& operator<<(std::ostream &out, const Sorcerer &sor)
{
    out << "I am " + sor.getName() +  ", " + sor.getTitle() + ", and I like ponies !" << std::endl;
    return (out);
}

void Sorcerer::polymorph(Victim const &vic)
{
    vic.getPolymorphed();
}

std::string Sorcerer::getName() const
{
    return (this->name);
}

std::string Sorcerer::getTitle() const
{
    return (this->title);
}