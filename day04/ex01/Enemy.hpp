/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:10:31 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 20:29:59 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
    public:
    Enemy(int hp, std::string const & type);
    Enemy(const Enemy&);
    virtual ~Enemy();

    Enemy& operator=(const Enemy& over);    

    std::string const getType() const;
    int getHP() const;
    virtual void takeDamage(int);
    
    private:
    std::string type;
    int hp;
};

#endif