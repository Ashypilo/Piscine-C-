/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:16:39 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 19:52:57 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(std::string);
    ScavTrap(const ScavTrap&);
    ~ScavTrap();

    ScavTrap& operator=(const ScavTrap &over);

  

    void challengeNewcomer(std::string const &target);
    std::string getName();
};

#endif