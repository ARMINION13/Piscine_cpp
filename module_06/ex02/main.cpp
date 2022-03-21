/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:10:25 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/21 20:46:19 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"
#include "A.hpp"
#include "C.hpp"

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
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Class A" << std::endl;
        return ;
    }
    catch (const std::exception)
    {
        
    }
    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "Class B" << std::endl;
        return ;
    }
    catch (const std::exception)
    {
        
    }
    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "Class C" << std::endl;
        return ;
    }
    catch (const std::exception)
    {
           
    }
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