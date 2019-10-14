/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:11:40 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 20:30:35 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion: public Enemy
{
    public:
    RadScorpion();
    RadScorpion(const RadScorpion&);
    virtual ~RadScorpion();

    RadScorpion& operator=(const RadScorpion& over);  

    void takeDamage(int damage);

};

#endif