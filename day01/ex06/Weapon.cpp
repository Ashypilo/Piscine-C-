/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:53:46 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:21:16 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    setType(str);
    return ;
}

Weapon::~Weapon()
{
    return ;
}

const std::string& Weapon::getType() const
{
    return (this->type);
}

void Weapon::setType(std::string str)
{
    this->type = str;
}