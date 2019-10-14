/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:58:17 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/09 13:27:48 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

class OfficeBlock
{
    public:
    OfficeBlock();
    OfficeBlock(Intern&, Bureaucrat&, Bureaucrat&);
    ~OfficeBlock();
    
    void doBureaucracy(std::string name, std::string target);
    void setIntern(Intern&);
    void setSigner(Bureaucrat&);
    void setExecutor(Bureaucrat&);

    class DoesNotInternException: public std::exception
    {
        public:
        DoesNotInternException();
        DoesNotInternException(const DoesNotInternException&);
        ~DoesNotInternException() throw();
        DoesNotInternException& operator=(const DoesNotInternException&);

        const char* what() const throw();
    };

    class NotSignedBureaucratException: public std::exception
    {
        public:
        NotSignedBureaucratException();
        NotSignedBureaucratException(const NotSignedBureaucratException&);
        ~NotSignedBureaucratException() throw();
        NotSignedBureaucratException& operator=(const NotSignedBureaucratException&);

        const char* what() const throw();
    };

    class NotExecutBureaucratException: public std::exception
    {
        public:
        NotExecutBureaucratException();
        NotExecutBureaucratException(const NotExecutBureaucratException&);
        ~NotExecutBureaucratException() throw();
        NotExecutBureaucratException& operator=(const NotExecutBureaucratException&);

        const char* what() const throw();
    };

    class SignedLowException: public std::exception
    {
        public:
        SignedLowException();
        SignedLowException(const SignedLowException&);
        ~SignedLowException() throw();
        SignedLowException& operator=(const SignedLowException&);

        const char* what() const throw();
    };

     class ExecutLowException: public std::exception
    {
        public:
        ExecutLowException();
        ExecutLowException(const ExecutLowException&);
        ~ExecutLowException() throw();
        ExecutLowException& operator=(const ExecutLowException&);

        const char* what() const throw();
    };

    private:
    OfficeBlock(const OfficeBlock&);
    OfficeBlock& operator=(const OfficeBlock&);
    
    Intern *intern;
    Bureaucrat *bur_sign;
    Bureaucrat *bur_execute;
};

#endif