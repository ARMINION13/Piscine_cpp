/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:30:51 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/11 21:18:54 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_
#define _FIXED_

#include <iostream>

class Fixed
{
    private:
        int _val;
        static const int _fract_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &asg);
        Fixed(const int nbr);
        Fixed(const float nbr);
       
        ~Fixed();
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat() const;
        int toInt() const;
        
        void operator=(Fixed const &asg);
        
        bool operator>(Fixed const &var);
        bool operator<(Fixed const &var);
        bool operator>=(Fixed const &var);
        bool operator<=(Fixed const &var);
        bool operator==(Fixed const &var);
        bool operator!=(Fixed const &var);
        
        Fixed operator+(Fixed const &var) const;
        Fixed operator-(Fixed const &var) const;
        Fixed operator*(Fixed const &var) const;
        Fixed operator/(Fixed const &var) const;
        
        Fixed& operator--();
        Fixed& operator++();
        Fixed operator++(int);
        Fixed operator--(int);
        
        static const Fixed &min(const Fixed &nbr1, const Fixed &nbr2);
        static Fixed &min(Fixed &nbr1, Fixed &nbr2);

        static const Fixed &max(const Fixed &nbr1, const Fixed &nbr2);
        static Fixed &max(Fixed &nbr1, Fixed &nbr2);
};

std::ostream&    operator<<(std::ostream &o, Fixed const &fixed);

#endif