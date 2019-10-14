/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:46:15 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:18:56 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
# include <iostream>
# include <string>
# include <sstream>

class Brain
{
    public:
    Brain();
    ~Brain();
    void getBrain();
    std::string identify() const;

    private:
    std::string string;
};

#endif