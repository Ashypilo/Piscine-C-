/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:53:33 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:22:48 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
  public:
    HumanB(std::string);
    ~HumanB();
    void attack();
    void setWeapon(Weapon&);

  private:
    std::string Name;
    Weapon *weapon;
};

#endif