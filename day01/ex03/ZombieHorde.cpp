/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:16:22 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 13:36:43 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    this->N = n;
    this->z = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        z[i].setZombieType("Dead");
        z[i].setZombieName(randomChump());
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] z;
    return ;
}

std::string ZombieHorde::randomChump()
{
    int index;
    std::string name[7] = {"Ann", "Dany", "Mike", "Jake", "Andy", "Sam", "Nick"};

    index = rand() % 7;
    return (name[index]);
}

void ZombieHorde::announce()
{
    for (int i = 0; i < this->N; i++)
    {
        z[i].announce();
    }
}