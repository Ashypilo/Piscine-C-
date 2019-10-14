/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 20:12:39 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/05 13:25:40 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return ;
}

TacticalMarine::TacticalMarine(TacticalMarine& over)
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
    *this = over;
    return ;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
    return ;
}

TacticalMarine& TacticalMarine::operator=(const TacticalMarine& over)
{
    (void)over;
    return (*this);        
}

ISpaceMarine* TacticalMarine::clone() const
{
    ISpaceMarine *copy = new TacticalMarine();
    return (copy);
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with bolter *" << std::endl;
}

