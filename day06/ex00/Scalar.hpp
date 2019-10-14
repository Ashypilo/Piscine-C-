/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:04:03 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/10 11:45:29 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <errno.h>

class Scalar
{
    public:
    Scalar();
    Scalar(std::string);
    Scalar(const Scalar&);
    ~Scalar();
    Scalar& operator=(const Scalar&);

    operator char() const;
    operator int() const;
    operator float() const;
    operator double() const;

    class ImpossibleException: public std::exception
    {
        public:
        ImpossibleException();
        ImpossibleException(const ImpossibleException&);
        ~ImpossibleException() throw();
        ImpossibleException& operator=(const ImpossibleException&);

        const char* what() const throw();
    };

    class Non_displayableExeption: public std::exception
    {
        public:
        Non_displayableExeption();
        Non_displayableExeption(const Non_displayableExeption&);
        ~Non_displayableExeption() throw();
        Non_displayableExeption& operator=(const Non_displayableExeption&);

        const char* what() const throw();
    };
    
    private:
    const std::string name;
};

#endif