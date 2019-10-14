/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:42:44 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 13:30:57 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef ZOMBIEEVENT_HPP
 # define ZOMBIEEVENT_HPP

 #include <iostream>
 #include <string>
 #include "Zombie.hpp"

class ZombieEvent
{
    public:
    ZombieEvent(void);
    ~ZombieEvent(void);
    void setZombieType(std::string);
    Zombie* newZombie(std::string);
    void randomChump();
    
    private:
    std::string type;

};

 #endif