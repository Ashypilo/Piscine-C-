/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:17:26 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 19:51:17 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "I am ZERO is born in the FragTrap" << std::endl;
    this->name = "ZERO";
    this->armor_damage_reduction = 0;
    this->energy_points = 0;
    this->hit_points = 0;
    this->level = 0;
    this->max_energy_points = 0;
    this->max_hit_points = 0;
    this->melee_attack_damage = 0;
    this->ranged_attack_damage = 0;
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



void FragTrap::vaulthunter_dot_exe(std::string const &target)
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
        std::cout << "You need energy in the FragTrap" << std::endl;
}

std::string FragTrap::getName()
{
    return (this->name);
}