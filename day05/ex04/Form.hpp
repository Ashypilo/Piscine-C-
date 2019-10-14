/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:34:19 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/08 18:44:13 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    public:
    Form(std::string, int, int);
    Form(const Form&);
    virtual ~Form();
    Form& operator=(const Form&);

    void beSigned(Bureaucrat const &);
    void execute(Bureaucrat const &) const;
    virtual void action() const = 0;
    
    class GradeTooHighException: public std::exception
    {
        public:
        GradeTooHighException();
        GradeTooHighException(const GradeTooHighException&);
        ~GradeTooHighException() throw();
        GradeTooHighException& operator=(const GradeTooHighException&);

        const char* what() const throw();
    };

    class GradeTooLowException: public std::exception
    {
        public:
        GradeTooLowException();
        GradeTooLowException(const GradeTooLowException&);
        ~GradeTooLowException() throw();
        GradeTooLowException& operator=(const GradeTooLowException&);

        const char* what() const throw();
    };

    class NotBureaucratSignException: public std::exception
    {
        public:
        NotBureaucratSignException();
        NotBureaucratSignException(const NotBureaucratSignException&);
        ~NotBureaucratSignException() throw();
        NotBureaucratSignException& operator=(const NotBureaucratSignException&);

        const char* what() const throw();
    };

    std::string getName() const;
    bool getIndicat() const;
    int getGrade_sign() const;
    int getGrade_execute() const;
    
    private:
    const std::string name;
    bool indicat;
    const int grade_sign;
    const int grade_execute;
    
};

    std::ostream& operator<<(std::ostream &out, const Form &f);
    
#endif