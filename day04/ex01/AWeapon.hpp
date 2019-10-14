/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:10:18 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 20:29:39 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
    public:
    AWeapon();
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(const AWeapon&);
    ~AWeapon();

    AWeapon& operator=(const AWeapon &over);
    
    std::string const getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
    
    private:
    std::string name;
    int damage;
    int ap_cost;
};

#endif