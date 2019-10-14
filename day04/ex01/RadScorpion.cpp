/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:11:36 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 20:30:43 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion():Enemy::Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(const RadScorpion& copy):Enemy::Enemy(copy)
{
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

RadScorpion& RadScorpion::operator=(const RadScorpion& over)
{
     if (this != &over)
        Enemy::operator=(over);
    return (*this);
}

void RadScorpion::takeDamage(int damage)
{
    Enemy::takeDamage(damage);
    return ;
}