/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 17:36:33 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 19:52:05 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class NinjaTrap: public ClapTrap
{
    public:
    NinjaTrap(void);
    NinjaTrap(std::string);
    NinjaTrap(const NinjaTrap&);
    ~NinjaTrap();

    NinjaTrap& operator=(const NinjaTrap &over);

    void ninjaShoebox(ClapTrap& clap);
    void ninjaShoebox(FragTrap& frag);
    void ninjaShoebox(ScavTrap& scav);
    void ninjaShoebox(NinjaTrap& nini);

};


#endif