/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:10:14 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 20:29:41 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
    return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
    this->name = name;
    this->damage = damage;
    this->ap_cost = apcost;
    return ;
}

AWeapon::AWeapon(const AWeapon& copy)
{
    *this = copy;
    return ;
}

AWeapon::~AWeapon()
{
    return ;
}

AWeapon& AWeapon::operator=(const AWeapon& over)
{
    if (this != &over)
    {
        this->name = over.name;
        this->damage = over.damage;
        this->ap_cost = over.ap_cost;
    }
    return (*this);
}

std::string const AWeapon::getName() const
{
    return (this->name);
}

int AWeapon::getDamage() const
{
    return (this->damage);
}

int AWeapon::getAPCost() const
{
    return (this->ap_cost);
}