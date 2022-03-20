/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:56:21 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/20 16:51:53 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

// void leak()
// {
//     system("leaks AnimalBrain");
// }

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Cat* k = new Cat();
    const Cat* l = new Cat(*k);
    
    delete l;
    delete k;
    delete j;//should not create a leak
    delete i;
    // atexit(leak);
}