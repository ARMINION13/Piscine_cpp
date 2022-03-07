/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:32:09 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/07 19:49:56 by rgirondo         ###   ########.fr       */
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

    for (int i = 0; i < 4; i++)
    {
        if (level == options[i])
            (this->*foptions[i])();
    }
}      