/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:42:13 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 12:30:44 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    Zombie z("Bob", "Dead");
    ZombieEvent z1;
    Zombie *z3;
    Zombie *z2;
    
    z.announce();
    
    z1.setZombieType("hill");
    z2 = z1.newZombie("Mike");
    z2->announce();
    delete z2;

    z1.randomChump();
    
    z3 = z1.newZombie("Dany");
    z3->announce();
    delete z3;

    z1.randomChump();
    
    return (0);
}