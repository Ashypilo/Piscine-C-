/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 13:57:50 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 19:51:47 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public:
    ClapTrap(void);
    ClapTrap(std::string);
    ClapTrap(const ClapTrap&);
    ~ClapTrap();

    ClapTrap& operator=(const ClapTrap &over);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void rearAttack(std::string const &target);
    void ValhalaAttack(std::string const &target);
    void ThorAttack(std::string const &target);

    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName();

    protected:
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