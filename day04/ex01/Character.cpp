/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:11:05 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 20:29:52 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
    this->name = name;
    this->point = 40;
    this->weapon = NULL;
    return ;
}

Character::Character(const Character& copy)
{
    *this = copy;
    return ;
}

Character::~Character()
{
    return ;
}

Character& Character::operator=(const Character& over)
{
    if (this != &over)
        this->name = over.name;
    return (*this);
}

std::ostream& operator<<(std::ostream &out, const Character &ch)
{
    if (ch.getWeapon())
    {
        out << ch.getName() << " has " << ch.getPoint() <<  " AP and wields a " << ch.getWeapon()->getName() << std::endl;
    }
    else
    {
        out << ch.getName() << " has " << ch.getPoint() << " AP and is unarmed" << std::endl;
    }
    return (out);
}

void Character::recoverAP()
{
    if (this->point <= 30)
        this->point += 10;
    else
        this->point = 40;
}

void Character::equip(AWeapon* weapon)
{
    this->weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
    if (enemy && this->weapon)
    {
        std::cout << this->name + " attacks " + enemy->getType() + " with a " + this->weapon->getName() << std::endl; 
        this->weapon->attack();
        enemy->takeDamage(this->weapon->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
        this->point = this->point - this->weapon->getAPCost();
    }
}

int Character::getPoint(void) const
{
    return (this->point);
}

AWeapon *Character::getWeapon(void) const
{
    return (this->weapon);
}

std::string const Character::getName() const
{
    return (this->name);
}