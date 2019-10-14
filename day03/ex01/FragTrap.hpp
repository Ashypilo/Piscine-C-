/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:16:16 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 19:50:12 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
{
    public:
    FragTrap();
    FragTrap(std::string);
    FragTrap(const FragTrap&);
    ~FragTrap();

    FragTrap& operator=(const FragTrap &over);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void rearAttack(std::string const &target);
    void ValhalaAttack(std::string const &target);
    void ThorAttack(std::string const &target);

    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void vaulthunter_dot_exe(std::string const & target);
    std::string getName();

    private:
    unsigned int hit_points;
    unsigned int max_hit_points;
    unsigned int energy_points;
    unsigned int max_energy_points;
    unsigned int level;
    std::string name;
    unsigned int melee_attack_damage;
    unsigned int ranged_attack_damage;
    unsigned int armor_damage_reduction;
};

#endif