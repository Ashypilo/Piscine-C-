/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 14:01:03 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/03 18:39:06 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::int_const = 8;

Fixed::Fixed()
{
    this->num = 0;
    // std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed& copy)
{
    *this = copy;
    // std::cout << "Copy constructor called" << std::endl;
    return ;
}

Fixed::Fixed(int const num)
{
    setRawBits(num << this->int_const);
    // std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(float const num)
{
    setRawBits(roundf(num * (1 << this->int_const)));
    // std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed& Fixed::operator=(const Fixed &over)
{
    num = over.num;
    // std::cout << "Assignation operator called" << std::endl;
    return (*this);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
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
/******************************///
bool Fixed::operator==(const Fixed& over)
{
    return (this->num == over.num);
}

bool Fixed::operator!=(const Fixed& over) 
{
    return (this->num != over.num);
}

bool Fixed::operator>(const Fixed& over) 
{
    return (this->num > over.num);
}

bool Fixed::operator<(const Fixed& over) 
{
    return (this->num < over.num);
}

bool Fixed::operator>=(const Fixed& over) 
{
    return (this->num >= over.num);
}

bool Fixed::operator<=(const Fixed& over) 
{
    return (this->num <= over.num);
}

Fixed Fixed::operator+(const Fixed& over) 
{
    return (Fixed(this->toFloat() + over.toFloat()));
}

Fixed Fixed::operator-(const Fixed& over) 
{
    return (Fixed(this->toFloat() - over.toFloat()));
}

Fixed Fixed::operator*(const Fixed& over) 
{
    return (Fixed(this->toFloat() * over.toFloat()));
}

Fixed Fixed::operator/(const Fixed& over) 
{
    return (Fixed(this->toFloat() / over.toFloat()));
}

Fixed& Fixed::operator++() 
{
    this->num++;
    return (*this);
}

Fixed Fixed::operator++(int) 
{
    Fixed out(*this);
    operator++();
    return (out);
}

Fixed& Fixed::operator--() 
{
    this->num--;
    return (*this);
}

Fixed Fixed::operator--(int) 
{
    Fixed out(*this);
    operator--();
    return (out);
}

const Fixed& Fixed::max(Fixed const &s1, Fixed const &s2) 
{
    if (s1.toFloat() >= s2.toFloat())
        return (s1);
    else
        return (s2);
}

Fixed& Fixed::max(Fixed &s1, Fixed &s2) 
{
    if (s1.toFloat() >= s2.toFloat())
        return (s1);
    else
        return (s2);
}

const Fixed& Fixed::min(Fixed const &s1, Fixed const &s2) 
{
    if (s1.toFloat() <= s2.toFloat())
        return (s1);
    else
        return (s2);
}

Fixed& Fixed::min(Fixed &s1, Fixed &s2) 
{
    if (s1.toFloat() <= s2.toFloat())
        return (s1);
    else
        return (s2);
}

std::ostream &operator<<(std::ostream &out, const Fixed& over) 
{
    out << over.toFloat();
    return (out);
}