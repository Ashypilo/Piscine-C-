/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:16:25 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 19:50:28 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "I am ZERO is born in the ClapTrap" << std::endl;
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

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, ";
    std::cout << "causing " << this->ranged_attack_damage << " points of damege in the ScavTrap!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, ";
    std::cout << "causing " << this->melee_attack_damage << " points of damege in the ScavTrap!" << std::endl;
}


void ScavTrap::rearAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at rear, ";
    std::cout << "causing " << this->ranged_attack_damage << " points of damege in the ScavTrap!" << std::endl;
}

void ScavTrap::ValhalaAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at Valhalaaaaaa, ";
    std::cout << "causing " << this->ranged_attack_damage + 20 << " points of damege in the ScavTrap!" << std::endl;
}

void ScavTrap::ThorAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at Thor, ";
    std::cout << "causing " << this->ranged_attack_damage + 20 << " points of damege in the ScavTrap!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points >= (amount - this->armor_damage_reduction))
    {
        this->hit_points -= (amount - this->armor_damage_reduction);
        std::cout << "You have " << this->hit_points << " hit points in the ScavTrap" << std::endl;
    }
    else
    {
        this->hit_points = 0;
        std::cout << "Target is dead in the ScavTrap" << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if ((this->hit_points + amount) < this->max_hit_points)
    {
        this->hit_points += amount;
        std::cout << "You have " << this->hit_points << " hit points in the ScavTrap" << std::endl;
    }
    else if ((this->hit_points + amount) >= this->max_hit_points)
    {
        this->hit_points = this->max_hit_points;
        std::cout << "You hit points is full in the ScavTrap" << std::endl;
    }
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
    if (this->energy_points >= 25)
    {
        int i;
        i = rand() % 5;    
        void (ScavTrap::*func[5])(std::string const & target) = 
        {
            &ScavTrap::meleeAttack,
            &ScavTrap::rangedAttack,
            &ScavTrap::rearAttack,
            &ScavTrap::ThorAttack,
            &ScavTrap::ValhalaAttack
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