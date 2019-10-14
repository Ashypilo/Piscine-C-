/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:16:45 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/04 11:09:59 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"


int main()
{
    NinjaTrap N;
    ScavTrap S;
    ClapTrap C;

    N.ninjaShoebox(S);
    N.ninjaShoebox(N);
    N.ninjaShoebox(C);
    return (0);
}