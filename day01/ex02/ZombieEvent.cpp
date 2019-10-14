/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:42:39 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 13:32:37 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{
    this->type = "standard";
    return ;
}
ZombieEvent::~ZombieEvent()
{
    return ;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *new_zombie = new Zombie(name, this->type);
    return (new_zombie);
}

void ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

void ZombieEvent::randomChump()
{
    std::string name[7] = {"Ann", "Dany", "Mike", "Jake", "Andy", "Sam", "Nick"};
    Zombie new_zombi1(name[rand() % 7], this->type);
    new_zombi1.announce();
}
