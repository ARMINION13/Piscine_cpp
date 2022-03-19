/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:10:25 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:01:16 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"
#include "A.hpp"
#include "C.hpp"
#include "thread"

Base *generate()
{
    int i = rand() % 3;
    if (i == 0)
    {
        std::cout << "A" << std::endl;
        return (new A);
    }
    if (i == 1)
    {
        std::cout << "B" << std::endl;
        return (new B);
    }
    if (i == 2)
    {
        std::cout << "C" << std::endl;
        return (new C);
    }
    return (NULL);
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Class A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "Class B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "Class C" << std::endl;   
}

void identify(Base &p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "Class A" << std::endl;
    if (dynamic_cast<B*>(&p))
        std::cout << "Class B" << std::endl;
    if (dynamic_cast<C*>(&p))
        std::cout << "Class C" << std::endl;   
}

int main()
{
    Base *tmp;
    
    srand(time(NULL));
    tmp = generate();
    identify(tmp);
    delete tmp;
    tmp = generate();
    identify(*tmp);
    delete tmp;
    return (0);
}