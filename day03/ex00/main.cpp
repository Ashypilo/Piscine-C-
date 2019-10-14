/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:11:18 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/03 12:12:49 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap fr1("FR1");
    FragTrap fr2("FR2");
        
    fr1.rangedAttack(fr2.getName());
    fr1.meleeAttack(fr2.getName());
    fr2.beRepaired(10);
    fr2.vaulthunter_dot_exe(fr1.getName());
    fr1.rangedAttack("asda");
    fr1.takeDamage(20);
    fr1.beRepaired(10);
    return (0);
}