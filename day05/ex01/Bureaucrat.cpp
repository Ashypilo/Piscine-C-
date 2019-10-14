/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:05:40 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/08 15:49:05 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
    std::cout << this->name + " ready" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& over)
{
    *this = over;
    return ;
}

Bureaucrat::~Bureaucrat()
{
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& over)
{
    if (this != &over)
        this->grade = over.grade;
    return (*this);
}

void Bureaucrat::GradeMinus()
{
    if ((this->grade - 1) < 1)
        throw Bureaucrat::GradeTooLowException();
    this->grade--;
    return ;
}

void Bureaucrat::GradePlus()
{
    if ((this->grade + 1) > 150)
        throw Bureaucrat::GradeTooHighException();
    this->grade++;
    return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException& over)
{
    *this = over;
    return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
    return ;
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(const Bureaucrat::GradeTooHighException& over)
{
    exception::operator=(over);
    return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Too high grade");
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException& over)
{
    *this = over;
    return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
    return ;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(const Bureaucrat::GradeTooLowException& over)
{
    exception::operator=(over);
    return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Too low grade");
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bur)
{
    out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
    return (out);
}

void Bureaucrat::signForm(Form& f)
{
    try
    {
        f.beSigned(*this);
        std::cout << this->name + " sign " + f.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << this->name + " not signs " + f.getName() + " because " << e.what() << std::endl;
    }
}
