/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 11:33:46 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/03 18:27:16 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
    public:
    Fixed();
    Fixed(const Fixed&);
    ~Fixed();
    Fixed& operator=(const Fixed&);
    int getRawBits() const;
    void setRawBits(int const raw);
    
    private:
    int num;
    static int const  int_const;
};

#endif