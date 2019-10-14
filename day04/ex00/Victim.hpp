/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:11:03 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/05 14:39:00 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
    public:
    Victim();
    Victim(std::string);
    Victim(const Victim&);
    ~Victim();

    Victim& operator=(const Victim &over);

    virtual void getPolymorphed() const;
    std::string getName() const;
    
    protected:
    std::string name;
};

std::ostream& operator<<(std::ostream &out, const Victim &sor);

#endif