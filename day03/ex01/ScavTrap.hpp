/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:16:39 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 19:50:25 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
    public:
    ScavTrap();
    ScavTrap(std::string);
    ScavTrap(const ScavTrap&);
    ~ScavTrap();

    ScavTrap& operator=(const ScavTrap &over);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void rearAttack(std::string const &target);
    void ValhalaAttack(std::string const &target);
    void ThorAttack(std::string const &target);

    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void challengeNewcomer(std::string const &target);
    std::string getName();

    private:
    std::string name;  
    unsigned int hit_points;
    unsigned int max_hit_points;
    unsigned int energy_points;
    unsigned int max_energy_points;
    unsigned int level;
    unsigned int melee_attack_damage;
    unsigned int ranged_attack_damage;
    unsigned int armor_damage_reduction;
};

#endif