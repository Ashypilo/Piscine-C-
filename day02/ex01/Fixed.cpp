/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 12:11:23 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/03 18:29:44 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::int_const = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->num = 0;
    return ;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Fixed::Fixed(int const num)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(num << this->int_const);
    return ;
}

Fixed::Fixed(float const num)
{
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(num * (1 << this->int_const)));
    return ;
}

Fixed& Fixed::operator=(const Fixed &over)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &over)
        num = over.num;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void Fixed::setRawBits(int const raw)
{
    this->num = raw;
}

int Fixed::getRawBits() const
{
    return (this->num);
}

float Fixed::toFloat(void) const
{
    return ((float)getRawBits() / (1 << this->int_const));
}

int Fixed::toInt(void) const
{
    return (getRawBits() >> this->int_const);
}

std::ostream &operator<<(std::ostream &out, const Fixed& over) 
{
    out << over.toFloat();
    return (out);
}
