/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:16:45 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/03 17:08:12 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    ClapTrap Fr;
    FragTrap fr1("FR1");
    ScavTrap fr2("FR2");

    Fr.ThorAttack(fr1.getName());    
    fr1.rangedAttack(fr2.getName());
    fr1.meleeAttack(fr2.getName());
    fr2.challengeNewcomer(fr1.getName());
    fr2.beRepaired(10);
    fr1.rangedAttack("asda");
    fr1.takeDamage(20);
    fr1.beRepaired(10);
    return (0);
}