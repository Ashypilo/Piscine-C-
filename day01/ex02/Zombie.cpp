/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:42:23 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:15:26 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
}

Zombie::Zombie(std::string name, std::string type)
{
    this->type = type;
    this->name = name;
    return ;
}

Zombie::~Zombie()
{
    return ;
}

void Zombie::setZombieName(std::string name)
{
    this->name = name;
}

void Zombie::setZombieType(std::string type)
{
    this->type = type;
}

void Zombie::announce()
{
    std::cout << "<" << this->name;
    std::cout << " (";
    std::cout << this->type;
    std::cout << ")> Braiiiiiiinnnssss..."<< std::endl;
}