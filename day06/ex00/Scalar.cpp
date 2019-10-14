/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:03:58 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/10 16:58:03 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar()
{

}

Scalar::Scalar(std::string name):name(name)
{
    
}

Scalar::Scalar(const Scalar& over)
{
    *this = over;
}

Scalar::~Scalar()
{

}

Scalar& Scalar::operator=(const Scalar& over)
{
    (void)over;
    return (*this);
}

Scalar::operator char() const
{
    char out;

    if (this->name[0] == '-' && this->name.length() != 1)
        throw Non_displayableExeption();  
    out = static_cast<char>(std::atoi(this->name.data()));
    if (out == 0 && this->name[0] != '0')
    {
        if (this->name.length() != 1)
            throw ImpossibleException();
        else
            out = this->name[0];
    }
    if (out < 33 || out > 126)
        throw Non_displayableExeption();
    return (out);
}

Scalar::operator int() const
{
    intmax_t i;

    i = 0;
    i = atoi(this->name.data());
    if ((i > 2147483647 || i < -2147483648) || (this->name.length() > 10 && i < 2147483647))
        throw ImpossibleException();
    if (((this->name[0] > 32 && this->name[0] < 48) || (this->name[0] > 57 && this->name[0] < 127)) && this->name.length() == 1)
        i = this->name[0];
    else if (i == 0 && this->name[0] != '0')
        throw ImpossibleException();
    else if ((i < 0 && this->name[0] != '-') || (i > 0 && this->name[0] == '-'))
        throw ImpossibleException();
    return (i);
}

Scalar::operator float() const
{
    double f;

    f = 0.0;
    f = atof(this->name.data());
    if (((this->name[0] > 32 && this->name[0] < 48) || (this->name[0] > 57 && this->name[0] < 127)) && this->name.length() == 1)
        f = this->name[0];
    else if (errno && ((f == 1.0/0.0 && f == -1.0/0.0 && f == 0.0/0.0) || (f == 0.0 && this->name[0] != '0')))
        throw ImpossibleException();
    float out = static_cast<float>(f);
    return (out);
}

Scalar::operator double() const
{
    double d;

    d = 0.0;
    d = atof(this->name.data());
    if (((this->name[0] > 32 && this->name[0] < 48) || (this->name[0] > 57 && this->name[0] < 127)) && this->name.length() == 1)
        d = this->name[0];
    else if (errno && ((d == 1.0/0.0 && d == -1.0/0.0 && d == 0.0/0.0) || (d == 0.0 && this->name[0] != '0')))
        throw ImpossibleException();
    return (d);
}

/*********************************************/
Scalar::ImpossibleException::ImpossibleException()
{
    return ;
}

Scalar::ImpossibleException::ImpossibleException(const ImpossibleException& over)
{
    *this = over;
    return ;
}

Scalar::ImpossibleException::~ImpossibleException() throw()
{
    return ;
}

Scalar::ImpossibleException& Scalar::ImpossibleException::operator=(const Scalar::ImpossibleException& over)
{
    exception::operator=(over);
    return (*this);
}

const char* Scalar::ImpossibleException::what() const throw()
{
    return ("impossible");
}

Scalar::Non_displayableExeption::Non_displayableExeption()
{
    return ;
}

Scalar::Non_displayableExeption::Non_displayableExeption(const Non_displayableExeption& over)
{
    *this = over;
    return ;
}

Scalar::Non_displayableExeption::~Non_displayableExeption() throw()
{
    return ;
}

Scalar::Non_displayableExeption& Scalar::Non_displayableExeption::operator=(const Scalar::Non_displayableExeption& over)
{
    exception::operator=(over);
    return (*this);
}

const char* Scalar::Non_displayableExeption::what() const throw()
{
    return ("Non displayable");
}

/*******************************************/