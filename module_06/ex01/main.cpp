/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:57:47 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/18 23:10:09 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data ptr;
    Data *new_ptr;
    
    ptr.val = 42;
    uintptr_t i;
    i = serialize(&ptr);
    std::cout << i << std::endl;
    new_ptr = deserialize(i);
    std::cout << new_ptr->val << std::endl;
    return (0);
}

// int main()
// {
// 	uintptr_t result;
// 	Data *data = new Data;
// 	Data *data2;
// 	data->val = 42;

// 	result = serialize(data);
// 	deresult = deserialize(result);
// 	std::cout << "data ptr address:" << &data << "\ndata address:" << data << "\ndata n value:" << data->val  <<  std::endl;
// 	std::cout << "\nderesult ptr address: " << &deresult << "\nderesult address: " << deresult << "\nderesult n value:" << deresult->val <<  std::endl;
// }