/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:53:51 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:21:14 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>
# include <sstream>

class Weapon
{
    public:
    Weapon(std::string);
    ~Weapon();
    const std::string&  getType() const;
    void                setType(std::string);

    private:
    std::string type;

};

#endif