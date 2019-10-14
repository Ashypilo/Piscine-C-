/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:53:22 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:21:28 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& weap): Name(n), weapon(weap)
{
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void HumanA::attack()
{
    std::cout << this->Name;
    std::cout << " attacks with his ";
    std::cout << weapon.getType() << std::endl;
}
