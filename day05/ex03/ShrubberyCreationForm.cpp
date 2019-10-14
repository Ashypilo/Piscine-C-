/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:52:48 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/08 18:16:00 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name):Form::Form(name, 145, 137)
{
    this->target = name;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& over): Form::Form(over.getName(), 145, 137)
{
    *this = over;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& over)
{
    if (this != &over)
        Form::operator=(over);
    return (*this);
}

void ShrubberyCreationForm::action() const
{
    std::ofstream out;

    out.open(this->target + "_shrubbery");
    if (out.fail())
        std::cout << "Error output file" << std::endl;
    else
    {
        out << "           /\\           " << std::endl;
        out << "          <..>          " << std::endl;
        out << "         <....>         " << std::endl;
        out << "        <......>        " << std::endl;
        out << "       <........>       " << std::endl;
        out << "      <..........>      " << std::endl;
        out << "     <............>     " << std::endl;
        out << "    <..............>    " << std::endl;
        out << "   <................>   " << std::endl;
        out << "  <..................>  " << std::endl;
        out << "          |  |          " << std::endl;
        out << "        __|  |__        " << std::endl;
        out << "<<<<<<</________\\>>>>>>" << std::endl;

        out.close();
    }
}