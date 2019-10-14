/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 20:12:23 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/05 13:36:09 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    this->unit = 0;
    return ;
}

Squad::Squad(const Squad& over)
{
    this->unit = over.unit;
    for (int i = 0; i < this->unit; i++)
        this->marine[i] = over.marine[i]->clone();
    return ;
}

Squad::~Squad()
{
    for (int i = 0; i < this->unit; i++)
        delete this->marine[i];
    return ;
}

Squad& Squad::operator=(const Squad& over)
{
    if (this != &over)
    {
        this->unit = over.unit;
        for (int i = 0; i < this->unit; i++)
            this->marine[i] = over.marine[i]->clone();
    }
    return (*this);
}

int Squad::getCount() const
{
    return (this->unit);
}

ISpaceMarine* Squad::getUnit (int i) const
{
    if (i >= 0 && i < this->unit)
        return (this->marine[i]);
    return (NULL);
}

int Squad::push(ISpaceMarine *marine)
{
    if (this->unit <= MAX)
        this->marine[this->unit++] = marine;
    return (this->unit);
}