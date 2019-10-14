/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 20:11:54 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/05 13:29:35 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& over)
{
    std::cout << "* teleports from space *" << std::endl;
    *this = over;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back ..." << std::endl;
    return ;
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator& over)
{
    (void)over;
    return (*this);        
}

ISpaceMarine* AssaultTerminator::clone() const
{
    ISpaceMarine *copy = new AssaultTerminator();
    return (copy);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}


