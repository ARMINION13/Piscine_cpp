/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:32:09 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/07 19:56:04 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

Karen::Karen()
{

}

Karen::~Karen()
{

}

void Karen::debug()
{
    std::cout << "I love to get extra bacon for my burger" << std::endl;
}

void Karen::info()
{
    std::cout << "I cannot believe adding extra bacon cost more money" << std::endl;    
}

void Karen::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free" << std::endl;    
}

void Karen::error()
{
    std::cout << "This is unacceptable, I want to speak to the manager now" << std::endl;
}

void Karen::complain(std::string level)
{
    std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Karen::*foptions[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    int i = 0;
    
    while (level != options[i] && i < 4)
        i++;
    switch (i)
    {
        case 0:
            (this->*foptions[0])();
        case 1:
            (this->*foptions[1])();
        case 2:
            (this->*foptions[2])();
        case 3:
            (this->*foptions[3])();
            break;
        default:
            std::cout << "Wrong Argument : " << level << std::endl;
    }
}              