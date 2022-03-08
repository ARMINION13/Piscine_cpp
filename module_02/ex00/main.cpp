/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:28:42 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/08 19:34:02 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;

    std::cout << "(a) " << a.getRawBits() << std::endl;
    std::cout << "(b) " << b.getRawBits() << std::endl;
    std::cout << "(c) " << c.getRawBits() << std::endl;
    return 0;
}