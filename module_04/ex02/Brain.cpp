/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:50:11 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:54:57 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    
}

Brain::~Brain()
{

}

Brain::Brain(const Brain &asg)
{
    *this = asg;
}

Brain &Brain::operator=(const Brain &asg)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = asg._ideas[i];
    return (*this);
}