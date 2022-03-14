/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:30:51 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/14 17:19:54 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_
#define _FIXED_

#include <iostream>
#include <math.h>

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
        float toFloat() const;
        int toInt() const;
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        void operator=(Fixed const &asg);
};

std::ostream&    operator<<(std::ostream &o, Fixed const &fixed);

#endif