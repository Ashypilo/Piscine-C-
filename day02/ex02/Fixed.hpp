/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 14:01:08 by ashypilo          #+#    #+#             */
/*   Updated: 2019/10/03 18:41:14 by ashypilo         ###   ########.fr       */
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
    ~Fixed();
    Fixed& operator=(const Fixed&);
    Fixed  operator+(const Fixed& over);
    Fixed  operator-(const Fixed& over);
    Fixed  operator*(const Fixed& over);
    Fixed  operator/(const Fixed& over);
    
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    static const Fixed& max(Fixed const &s1, Fixed const &s2); 
    static const Fixed& min(Fixed const &s1, Fixed const &s2);
    static Fixed& max(Fixed &s1, Fixed &s2); 
    static Fixed& min(Fixed &s1, Fixed &s2);

    bool operator==(const Fixed& over);
    bool operator!=(const Fixed& over);
    bool operator>(const Fixed& over);
    bool operator<(const Fixed& over); 
    bool operator>=(const Fixed& over); 
    bool operator<=(const Fixed& over);  
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