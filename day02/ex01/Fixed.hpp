/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 12:11:29 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/03 18:28:26 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>
# include <math.h>

class Fixed
{
    public:
    Fixed();
    Fixed(int const num);
    Fixed(float const num);
    Fixed(const Fixed&);
    Fixed& operator= (const Fixed&);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
    
    private:
    int num;
    static int const int_const;
};
    std::ostream &operator<<(std::ostream& out, const Fixed& over);

#endif