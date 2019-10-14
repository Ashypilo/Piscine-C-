/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:11:10 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 20:29:46 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    public:
    Character(std::string const & name);
    Character(const Character&);
    ~Character();
    
    Character& operator=(const Character& over);

    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    
    std::string const getName() const;
    AWeapon* getWeapon() const;
    int getPoint() const;
    
    private:
    std::string name;
    AWeapon *weapon;
    int point;
};

std::ostream& operator<<(std::ostream &out, const Character &ch);

#endif