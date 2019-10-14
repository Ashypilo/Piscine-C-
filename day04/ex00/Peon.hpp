/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:10:39 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/05 14:38:37 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
#include <iostream>
#include <string>

class Peon: public Victim
{
    public:
    Peon();
    Peon(std::string);
    Peon(const Peon&);
    ~Peon();

    Peon& operator=(const Peon &over);

    void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream &out, const Peon &peo);

#endif