/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:10:51 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/05 14:38:49 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"
#include <iostream>
#include <string>

class Sorcerer
{
    public:
    Sorcerer();
    Sorcerer(std::string, std::string);
    Sorcerer(const Sorcerer&);
    ~Sorcerer();

    Sorcerer& operator=(const Sorcerer &over);

    void polymorph(Victim const &vic);

    std::string getName() const;
    std::string getTitle() const;

    private:
    std::string name;
    std::string title;
};

std::ostream& operator<<(std::ostream &out, const Sorcerer& sor);

#endif