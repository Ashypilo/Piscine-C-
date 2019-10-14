/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:28:36 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 13:26:48 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
    public:

    Pony(void);
    Pony(std::string name, int color);
    ~Pony(void);
    std::string getName();
    std::string setName(std::string);
    std::string getColour();
    std::string setColour(std::string);
    int getAge();
    int setAge(int age);
    
    private:
    std::string name;
    std::string colour;
    int age;
};

void pony_On_The_Stack();
void pony_On_The_Heap();

#endif