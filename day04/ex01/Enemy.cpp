/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:10:26 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 20:30:03 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
    this->hp = hp;
    this->type = type;
    return ;
}

Enemy::Enemy(const Enemy& copy)
{
    *this = copy;
    return ;
}

Enemy::~Enemy()
{
    return ;
}

Enemy& Enemy::operator=(const Enemy& over)
{
    if (this != &over)
        this->type = over.type;
    return (*this);
}

void Enemy::takeDamage(int damage)
{
    if (this->hp > 0 && damage > 0)
        this->hp -= damage;
    else
        this->hp = 0;
}

std::string const Enemy::getType() const
{
    return (this->type);
}

int Enemy::getHP() const
{
    return (this->hp);
}
