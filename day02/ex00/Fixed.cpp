/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 11:11:54 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/03 18:27:47 by ashypilo         ###   ########.fr       */
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

Fixed& Fixed::operator=(const Fixed &over)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &over)
        this->num = over.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->num);
}

void Fixed::setRawBits( int const raw )
{
    this->num = raw;
}
