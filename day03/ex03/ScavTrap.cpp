/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:16:25 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 19:56:30 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "I am ZERO is born in the ScavTrap" << std::endl;
    this->name = "ZERO";
    this->level = 1;
    this->armor_damage_reduction = 3;
    this->energy_points = 100;
    this->max_energy_points = 100;
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->melee_attack_damage = 20;
    this->ranged_attack_damage = 15;
    return ;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "I am " << name << " is born in the ScavTrap" << std::endl;
    this->name = name;
    this->level = 1;
    this->armor_damage_reduction = 3;
    this->energy_points = 100;
    this->max_energy_points = 100;
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->melee_attack_damage = 20;
    this->ranged_attack_damage = 15;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    std::cout << "Copy call" << std::endl;
    *this = copy;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "I am " << name << " is finish in the ScavTrap" << std::endl;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &over)
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

void ScavTrap::challengeNewcomer(std::string const &target)
{
    if (this->energy_points >= 25)
    {
        int i;
        i = rand() % 5;    
        void (ClapTrap::*func[5])(std::string const & target) = 
        {
            &ClapTrap::meleeAttack,
            &ClapTrap::rangedAttack,
            &ClapTrap::rearAttack,
            &ClapTrap::ThorAttack,
            &ClapTrap::ValhalaAttack
        };
        (this->*func[i])(target);
        this->energy_points -= 25;
    }
    else
        std::cout << "You need energy in the ScavTrap" << std::endl;
}

std::string ScavTrap::getName()
{
    return (this->name);
}