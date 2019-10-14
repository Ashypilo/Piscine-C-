/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 17:36:27 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 19:59:16 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
    std::cout << "I am Ninja is born in the NinjaTrap" << std::endl;
    this->name = "Ninja";
    this->level = 0;
    this->armor_damage_reduction = 0;
    this->energy_points = 0;
    this->max_energy_points = 0;
    this->hit_points = 0;
    this->max_hit_points = 0;
    this->melee_attack_damage = 0;
    this->ranged_attack_damage = 0;
    return ;
}

NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << "I am " << name << " is born in the NinjaTrap" << std::endl;
    this->name = name;
    this->level = 1;
    this->armor_damage_reduction = 0;
    this->energy_points = 120;
    this->max_energy_points = 120;
    this->hit_points = 60;
    this->max_hit_points = 60;
    this->melee_attack_damage = 60;
    this->ranged_attack_damage = 5;
    return ;
}

NinjaTrap::NinjaTrap(const NinjaTrap& copy)
{
    std::cout << "Copy call" << std::endl;
    *this = copy;
    return ;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "I am " << name << " is finish in the NinjaTrap" << std::endl;
    return ;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap& over)
{
    name = over.name;
    level = over.level;
    armor_damage_reduction = over.armor_damage_reduction;
    energy_points = over.energy_points;
    max_energy_points = over.max_energy_points;
    hit_points = over.hit_points;
    max_hit_points = over.max_hit_points;
    melee_attack_damage = over.melee_attack_damage;
    ranged_attack_damage = over.ranged_attack_damage;
    return (*this);
}

void NinjaTrap::ninjaShoebox(ClapTrap& clap)
{
    std::cout << "I " + clap.getName() + " used ClapTrap class" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap& frag)
{
    std::cout << "I " + frag.getName() + " used FragTrap class" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap& scav)
{
    std::cout << "I " + scav.getName() + " used ScavTrap class" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& nini)
{
    std::cout << "I " + nini.getName() + " used NinjaTrap class" << std::endl;
}

