/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:58:12 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/09 13:38:16 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock()
{
   this->intern = nullptr;
   this->bur_sign = nullptr;
   this->bur_execute = nullptr;
}

OfficeBlock::OfficeBlock(Intern& intern, Bureaucrat& bur_sign, Bureaucrat& bur_execute)
{
    this->setSigner(bur_sign);
    this->setIntern(intern);
    this->setExecutor(bur_execute);
}

OfficeBlock::~OfficeBlock()
{
    
}

void OfficeBlock::doBureaucracy(std::string name, std::string target)
{
    Form *out = nullptr;

    if (!this->intern)
        throw DoesNotInternException();
    if (!this->bur_sign)
        throw NotSignedBureaucratException();
    if (!this->bur_execute)
        throw NotExecutBureaucratException(); 
    out = this->intern->makeForm(name, target);
    if (out == nullptr)
        return ;
    try
    {
        this->bur_sign->signForm(*out);
    }
    catch (std::exception& e)
    {
        throw SignedLowException();
    }
    try 
    {
        this->bur_execute->executeForm(*out);
    }
    catch (std::exception& e)
    {
        throw ExecutLowException();
    }
    delete out;
}

/****************************************/

OfficeBlock::DoesNotInternException::DoesNotInternException()
{
   
}

OfficeBlock::DoesNotInternException::DoesNotInternException(const DoesNotInternException& over)
{
    *this = over;
    
}

OfficeBlock::DoesNotInternException::~DoesNotInternException() throw()
{
    
}

OfficeBlock::DoesNotInternException& OfficeBlock::DoesNotInternException::operator=(const OfficeBlock::DoesNotInternException& over)
{
    exception::operator=(over);
    return (*this);
}

const char* OfficeBlock::DoesNotInternException::what() const throw()
{
    return ("Does not intern");
}

OfficeBlock::NotSignedBureaucratException::NotSignedBureaucratException()
{
   
}

OfficeBlock::NotSignedBureaucratException::NotSignedBureaucratException(const NotSignedBureaucratException& over)
{
    *this = over;
    
}

OfficeBlock::NotSignedBureaucratException::~NotSignedBureaucratException() throw()
{
    
}

OfficeBlock::NotSignedBureaucratException& OfficeBlock::NotSignedBureaucratException::operator=(const OfficeBlock::NotSignedBureaucratException& over)
{
    exception::operator=(over);
    return (*this);
}

const char* OfficeBlock::NotSignedBureaucratException::what() const throw()
{
    return ("Does not sign bureaucrat");
}

OfficeBlock::NotExecutBureaucratException::NotExecutBureaucratException()
{
   
}

OfficeBlock::NotExecutBureaucratException::NotExecutBureaucratException(const NotExecutBureaucratException& over)
{
    *this = over;
    
}

OfficeBlock::NotExecutBureaucratException::~NotExecutBureaucratException() throw()
{
    
}

OfficeBlock::NotExecutBureaucratException& OfficeBlock::NotExecutBureaucratException::operator=(const OfficeBlock::NotExecutBureaucratException& over)
{
    exception::operator=(over);
    return (*this);
}

const char* OfficeBlock::NotExecutBureaucratException::what() const throw()
{
    return ("Does not execute bureaucrat");
}

OfficeBlock::SignedLowException::SignedLowException()
{
   
}

OfficeBlock::SignedLowException::SignedLowException(const SignedLowException& over)
{
    *this = over;
    
}

OfficeBlock::SignedLowException::~SignedLowException() throw()
{
    
}

OfficeBlock::SignedLowException& OfficeBlock::SignedLowException::operator=(const OfficeBlock::SignedLowException& over)
{
    exception::operator=(over);
    return (*this);
}

const char* OfficeBlock::SignedLowException::what() const throw()
{
    return ("Too low grade sign");
}

OfficeBlock::ExecutLowException::ExecutLowException()
{
   
}

OfficeBlock::ExecutLowException::ExecutLowException(const ExecutLowException& over)
{
    *this = over;
    
}

OfficeBlock::ExecutLowException::~ExecutLowException() throw()
{
    
}

OfficeBlock::ExecutLowException& OfficeBlock::ExecutLowException::operator=(const OfficeBlock::ExecutLowException& over)
{
    exception::operator=(over);
    return (*this);
}

const char* OfficeBlock::ExecutLowException::what() const throw()
{
    return ("Too low grade execute");
}

/****************************************/

void OfficeBlock::setIntern(Intern& intern)
{
    this->intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat& bur_sign)
{
    this->bur_sign = &bur_sign;
}

void OfficeBlock::setExecutor(Bureaucrat& bur_execute)
{
    this->bur_execute = &bur_execute;
}