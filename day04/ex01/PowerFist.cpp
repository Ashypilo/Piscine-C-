/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:11:23 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 20:30:29 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon::AWeapon("Power Fist", 8, 50)
{
    return ;
}

PowerFist::PowerFist(const PowerFist& copy)
{
    *this = copy;
    return ;
}

PowerFist::~PowerFist()
{
    return ;
}

PowerFist& PowerFist::operator=(const PowerFist& over)
{
     if (this != &over)
        AWeapon::operator=(over);
    return (*this);
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}