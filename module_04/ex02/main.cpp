/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:56:21 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 21:01:20 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void leak()
{
    system("leaks AnimalBrain");
}

int main()
{
    const Animal* f = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete f;
    delete j;//should not create a leak
    delete i;
    //atexit(leak);
}