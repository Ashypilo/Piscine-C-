/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:17:13 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 13:36:40 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
 # define ZOMBIEHORDE_HPP

 #include <iostream>
 #include <string>
 #include <ctime>
 #include "Zombie.hpp"

class ZombieHorde
{
    public:
    ZombieHorde(int n);
    ~ZombieHorde(void);
    std::string randomChump();
    void announce();
    
    private:
    Zombie *z;
    int N;

};

 #endif