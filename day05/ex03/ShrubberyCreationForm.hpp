/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:52:52 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/08 18:08:26 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATION_HPP
#define SHRUBBERYCREATION_HPP

#include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm: public Form
{
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string);
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);

    virtual void action() const;

    private:
    std::string target;
};

#endif