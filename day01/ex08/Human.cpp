/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:15:48 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/01 14:18:50 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
   std::cout << "Is used meleeAttack " << target << std::endl;
}
    
void Human::rangedAttack(std::string const & target)
{
    std::cout << "Is used rangedAttack " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "Is used intimidatingShout " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    Human out;
    std::string function[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

    void (Human::*func[3])(std::string const & target) = 
    {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout
    };
    
    for (int i = 0; i < 3; i++)
    {
        if (function[i] == action_name)
        {
            (this->*func[i])(target);
        }
    }
}