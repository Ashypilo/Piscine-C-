/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:05:46 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/09 11:57:12 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;

class Bureaucrat
{
    public:
    Bureaucrat(std::string, int);
    Bureaucrat(const Bureaucrat&);
    ~Bureaucrat();

    Bureaucrat& operator=(const Bureaucrat&);
    
    void GradeMinus();
    void GradePlus();
    void signForm(Form&);
    void executeForm(Form const &); 
    class GradeTooHighException: public std::exception
    {
        public:
        GradeTooHighException();
        GradeTooHighException(const GradeTooHighException&);
        ~GradeTooHighException() throw() ;
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

    std::string getName() const;
    int getGrade() const;

    private:
    const std::string name;
    int grade;

};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bur);

#endif