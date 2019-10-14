/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:42:29 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:13:01 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef ZOMBIE_HPP
 # define ZOMBIE_HPP

 #include <iostream>
 #include <string>
 #include <ctime> 

class Zombie
{
    public:

    Zombie();
    Zombie(std::string, std::string);
    ~Zombie(void);
    void setZombieName(std::string);
    void setZombieType(std::string);
    void announce();

    private:
    std::string name;
    std::string type;

};

 #endif