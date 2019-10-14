/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:46:45 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:19:03 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Human.hpp"

Human::Human()
{
    return ;
}

Human::~Human()
{
    return ;
}

Brain Human::getBrain()
{
    return (this->brain);
}

std::string Human::identify() const
{
    return (this->brain.identify());
}