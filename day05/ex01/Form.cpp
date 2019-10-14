/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:34:14 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/08 15:20:35 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int get_sign, int get_execute):name(name), grade_sign(get_sign), grade_execute(get_execute)
{
    if (this->grade_execute > 150 || this->grade_sign > 150)
        throw Form::GradeTooHighException();
    else if (this->grade_execute < 1 || this->grade_sign < 1)
        throw Form::GradeTooLowException();
    this->indicat = 0;
    return ;
}

Form::Form(const Form& over):name(over.name), grade_sign(over.grade_sign), grade_execute(over.grade_execute)
{
    *this = over;
    return ;
}

Form::~Form()
{
    return ;
}

Form& Form::operator=(const Form& over)
{
    if (this != &over)
    {
        *this = over;
        this->indicat = over.indicat;
    }
    return (*this);
}

void Form::beSigned(Bureaucrat& bur)
{
    if (bur.getGrade() > this->grade_sign)
        throw Form::GradeTooLowException();
    this->indicat = 1;
}

/*****************************************/

Form::GradeTooHighException::GradeTooHighException()
{
    return ;
}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException& over)
{
    *this = over;
    return ;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
    return ;
}

Form::GradeTooHighException& Form::GradeTooHighException::operator=(const Form::GradeTooHighException& over)
{
    exception::operator=(over);
    return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Too high grade");
}

Form::GradeTooLowException::GradeTooLowException()
{
    return ;
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException& over)
{
    *this = over;
    return ;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
    return ;
}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(const Form::GradeTooLowException& over)
{
    exception::operator=(over);
    return (*this);
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Too low grade");
}

/****************************************/

std::string Form::getName() const
{
    return (this->name);
}

bool Form::getIndicat() const
{
    return (this->indicat);
}

int Form::getGrade_sign() const
{
    return (this->grade_sign);
}

int Form::getGrade_execute() const
{
    return (this->grade_execute);
}

std::ostream& operator<<(std::ostream &out, const Form &f)
{
    out << f.getName() + " has signature status" << f.getIndicat() << "Grade sign = " << f.getGrade_sign() << " and Grade execute = " << f.getGrade_execute() << std::endl;  
    return (out);
}