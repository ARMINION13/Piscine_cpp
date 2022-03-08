/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:30:51 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/08 19:34:33 by rgirondo         ###   ########.fr       */
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
        Fixed(Fixed &asg);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        void operator=(Fixed &asg);
};

#endif