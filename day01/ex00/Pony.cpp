/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:28:30 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 13:29:03 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
    return;
}

Pony::Pony(std::string name, int color)
{
    this->name = name;
    this->colour = color;
    return;
}

Pony::~Pony()
{
    return;
}

std::string Pony::getName()
{
    return (this->name);
}

std::string Pony::setName(std::string name)
{
    this->name = name;
    return (this->name);
}

std::string Pony::getColour()
{
    return (this->colour);
}

std::string Pony::setColour(std::string colour)
{
    this->colour = colour;
    return (this->colour);
}

int Pony::getAge()
{
    return (this->age);
}

int Pony::setAge(int age)
{
    this->age = age;
    return (this->age);
}

void pony_On_The_Heap()
{
    Pony *two_pony = new Pony();

    two_pony->setName("Magy");
    two_pony->setAge(4);
    two_pony->setColour("Black");
    std::cout << "Name two pony: " << two_pony->getName() << " | ";
    std::cout << "Age two pony: " << two_pony->getAge() << " | ";
    std::cout << "Colour two pony: " << two_pony->getColour();
    std::cout << std::endl;

    delete two_pony;
}

void pony_On_The_Stack()
{
    Pony one_pony;

    one_pony.setName("Daby");
    one_pony.setAge(5);
    one_pony.setColour("White");
    std::cout << "Name one pony: " << one_pony.getName() << " | ";
    std::cout << "Age one pony: " << one_pony.getAge() << " | ";
    std::cout << "Colour one pony: " << one_pony.getColour();
    std::cout << std::endl;
}