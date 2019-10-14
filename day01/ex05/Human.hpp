/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:46:39 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/02 14:18:06 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{
    public:
    Human();
    ~Human();
    Brain getBrain();
    std::string identify() const;
    
    private:
    const Brain brain;
};

#endif