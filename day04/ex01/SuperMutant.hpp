/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:11:53 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 20:30:49 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant: public Enemy
{
    public:
    SuperMutant();
    SuperMutant(const SuperMutant&);
    virtual ~SuperMutant();

    SuperMutant& operator=(const SuperMutant& over);

    void takeDamage(int);

};

#endif