/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:17:26 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 19:50:14 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    return ;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "I am " << name << " is born in the FragTrap" << std::endl;
    this->name = name;
    this->armor_damage_reduction = 5;
    this->energy_points = 100;
    this->hit_points = 100;
    this->level = 1;
    this->max_energy_points = 100;
    this->max_hit_points = 100;
    this->melee_attack_damage = 30;
    this->ranged_attack_damage = 20;
    return ;
}

FragTrap::FragTrap(const FragTrap& copy)
{
    std::cout << "Copy call" << std::endl;
    *this = copy;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "I am " << name << " is finish in the FragTrap" << std::endl;
    return ;
}

FragTrap& FragTrap::operator=(const FragTrap &over)
{
    name = over.name;
    armor_damage_reduction = over.armor_damage_reduction;
    energy_points = over.energy_points;
    hit_points = over.hit_points;
    level = over.level;
    max_energy_points = over.max_energy_points;
    max_hit_points = over.max_hit_points;
    melee_attack_damage = over.melee_attack_damage;
    ranged_attack_damage = over.ranged_attack_damage;
    return (*this);
}

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, ";
    std::cout << "causing " << this->ranged_attack_damage << " points of damege in the FragTrap!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, ";
    std::cout << "causing " << this->melee_attack_damage << " points of damege in the FragTrap!" << std::endl;
}


void FragTrap::rearAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at rear, ";
    std::cout << "causing " << this->ranged_attack_damage << " points of damege in the FragTrap!" << std::endl;
}

void FragTrap::ValhalaAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at Valhalaaaaaa, ";
    std::cout << "causing " << this->ranged_attack_damage + 20 << " points of damege in the FragTrap!" << std::endl;
}

void FragTrap::ThorAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at Thor, ";
    std::cout << "causing " << this->ranged_attack_damage + 20 << " points of damege in the FragTrap!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points >= (amount - this->armor_damage_reduction))
    {
        this->hit_points -= (amount - this->armor_damage_reduction);
        std::cout << "You have " << this->hit_points << " hit points in the FragTrap" << std::endl;
    }
    else
    {
        this->hit_points = 0;
        std::cout << "Target is dead in the FragTrap" << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount)
{
    if ((this->hit_points + amount) < this->max_hit_points)
    {
        this->hit_points += amount;
        std::cout << "You have " << this->hit_points << " hit points in the FragTrap" << std::endl;
    }
    else if ((this->hit_points + amount) >= this->max_hit_points)
    {
        this->hit_points = this->max_hit_points;
        std::cout << "You hit points is full in the FragTrap" << std::endl;
    }
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    if (this->energy_points >= 25)
    {
        int i;
        i = rand() % 5;    
        void (FragTrap::*func[5])(std::string const & target) = 
        {
            &FragTrap::meleeAttack,
            &FragTrap::rangedAttack,
            &FragTrap::rearAttack,
            &FragTrap::ThorAttack,
            &FragTrap::ValhalaAttack
        };
        (this->*func[i])(target);
        this->energy_points -= 25;
    }
    else
        std::cout << "You need energy in the FragTrap" << std::endl;
}

std::string FragTrap::getName()
{
    return (this->name);
}