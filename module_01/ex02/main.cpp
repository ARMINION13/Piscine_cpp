/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:17:01 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/05 19:35:48 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str;
    std::string *ptr;
    std::string &ref = str;

    str = "HI THIS IS BRAIN";
    ptr = &str;
    std::cout << "Address ptr: " << ptr << std::endl;
    std::cout << "Address ref: " << ref << std::endl;
    std::cout << "Address str: " << &str << std::endl;
    std::cout << "Content ptr: " << ptr << std::endl;
    std::cout << "Content ref: " << ref << std::endl;
    std::cout << "Content str: " << str << std::endl;
    return (0);
}