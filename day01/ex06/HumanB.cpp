/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:53:38 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:22:46 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n): Name(n)
{
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void HumanB::setWeapon(Weapon& w)
{
    this->weapon = &w;
}

void HumanB::attack()
{
    std::cout << this->Name;
    std::cout << " attacks with his ";
    std::cout << weapon->getType() << std::endl;
}