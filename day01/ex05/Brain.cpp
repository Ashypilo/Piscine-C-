/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:46:11 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:18:58 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    getBrain();
    return ;
}

Brain::~Brain()
{
    return ;
}

void Brain::getBrain()
{
    std::stringstream buffer;

    buffer << &(this->string);
    this->string = buffer.str();
}

std::string Brain::identify() const
{
    return (this->string);
}