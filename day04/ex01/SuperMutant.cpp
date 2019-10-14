/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:11:48 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 20:30:55 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant():Enemy::Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return ;
}

SuperMutant::SuperMutant(const SuperMutant& copy):Enemy::Enemy(copy)
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return ;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
    return ;
}

SuperMutant& SuperMutant::operator=(const SuperMutant& over)
{
     if (this != &over)
        Enemy::operator=(over);
    return (*this);
}

void SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
    return ;
}