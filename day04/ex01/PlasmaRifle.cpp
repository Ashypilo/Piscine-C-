/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:10:41 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/05 16:23:52 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():AWeapon::AWeapon("Plasma Rifle", 5, 21)
{
    return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& copy)
{
    *this = copy;
    return ;
}

PlasmaRifle::~PlasmaRifle()
{
    return ;
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& over)
{
     if (this != &over)
        AWeapon::operator=(over);
    return (*this);
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

