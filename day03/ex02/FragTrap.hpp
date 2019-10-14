/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:16:16 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 19:51:14 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap: public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string);
    FragTrap(const FragTrap&);
    ~FragTrap();

    FragTrap& operator=(const FragTrap &over);



    void vaulthunter_dot_exe(std::string const & target);
    std::string getName();
};

#endif