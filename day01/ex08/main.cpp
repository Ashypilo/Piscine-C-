/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:15:59 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:36:04 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
    Human out;
    
    out.action("rangedAttack", "ON");
    out.action("meleeAttack", "ON"); 
    out.action("intimidatingShout", "ON");

    return (0);
}