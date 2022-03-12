/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:56:21 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/12 18:51:42 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

void leak()
{
    system("leaks Animal");
}

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    // const WrongAnimal* meta_2 = new WrongAnimal();
    // const WrongAnimal* j_2 = new WrongDog();
    // const WrongAnimal* i_2 = new WrongCat();
    // std::cout << j_2->getType() << " " << std::endl;
    // std::cout << i_2->getType() << " " << std::endl;
    // i_2->makeSound(); //will output the cat sound!
    // j_2->makeSound();
    // meta_2->makeSound();
    //atexit(leak);
}