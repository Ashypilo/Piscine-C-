/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 13:57:45 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 19:50:55 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "I am ZERO is born in the ClapTrap" << std::endl;
    this->name = "ZERO";
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

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "I am " << name << " is born in the ClapTrap" << std::endl;
    this->name = name;
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

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy call" << std::endl;
    *this = copy;
    return ;
}

ClapTrap::~ClapTrap()
{
     std::cout << "I am " << name << " is finish in the ClapTrap" << std::endl;
     return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& over)
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

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, ";
    std::cout << "causing " << this->ranged_attack_damage << " points of damege in the ClapTrap!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, ";
    std::cout << "causing " << this->melee_attack_damage << " points of damege in the ClapTrap!" << std::endl;
}


void ClapTrap::rearAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at rear, ";
    std::cout << "causing " << this->ranged_attack_damage << " points of damege in the ClapTrap!" << std::endl;
}

void ClapTrap::ValhalaAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at Valhalaaaaaa, ";
    std::cout << "causing " << this->ranged_attack_damage + 20 << " points of damege in the ClapTrap!" << std::endl;
}

void ClapTrap::ThorAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at Thor, ";
    std::cout << "causing " << this->ranged_attack_damage + 20 << " points of damege in the ClapTrap!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points >= (amount - this->armor_damage_reduction))
    {
        this->hit_points -= (amount - this->armor_damage_reduction);
        std::cout << "You have " << this->hit_points << " hit points in the ClapTrap" << std::endl;
    }
    else
    {
        this->hit_points = 0;
        std::cout << "Target is dead in the ClapTrap" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ((this->hit_points + amount) < this->max_hit_points)
    {
        this->hit_points += amount;
        std::cout << "You have " << this->hit_points << " hit points in the ClapTrap" << std::endl;
    }
    else if ((this->hit_points + amount) >= this->max_hit_points)
    {
        this->hit_points = this->max_hit_points;
        std::cout << "You hit points is full in the ClapTrap" << std::endl;
    }
}

std::string ClapTrap::getName()
{
    return (this->name);
}
