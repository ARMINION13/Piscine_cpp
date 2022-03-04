/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:46:24 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/04 21:02:15 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_book.hpp"

void    add_new_contact(phonebook *book)
{
    std::string buff;

    std::cout << "Introduce Nombre : ";
    std::cin >> buff;
    (book->cont[book->get_current()]).set_name(buff);
    std::cout << "Introduce Apellido : ";
    std::cin >> buff;
    (book->cont[book->get_current()]).set_last_name(buff);
    std::cout << "Introduce Apodo : ";
    std::cin >> buff;
    (book->cont[book->get_current()]).set_nick(buff);
    std::cout << "Introduce Telefono : ";
    std::cin >> buff;
    (book->cont[book->get_current()]).set_phone(buff);
    std::cout << "Introduce Secreto mas oscuro : ";
    std::cin >> buff;
    (book->cont[book->get_current()]).set_dark_secret(buff);
    book->move_current();
}

std::string get_short(std::string str)
{
    int i;
    std::string new_str;

    i = 0;
    new_str = "          ";
    while (new_str[i] || i < 10)
    {
        if (str[i])
            new_str[i] = str[i];
        i++;
    }
    if (str[i])
        new_str[(i - 1)] = '.';
    return (new_str);
}

std::string index_str(int i)
{
    if (i == 0)
        return ("1");
    if (i == 1)
        return ("2");
    if (i == 2)
        return ("3");
    if (i == 3)
        return ("4");
    if (i == 4)
        return ("5");
    if (i == 5)
        return ("6");
    if (i == 6)
        return ("7");
    else
        return ("8");
}

int index_int(std::string str)
{
    if (str == "1")
        return (0);
    if (str == "2")
        return (1);
    if (str == "3")
        return (2);
    if (str == "4")
        return (3);
    if (str == "5")
        return (4);
    if (str == "6")
        return (5);
    if (str == "7")
        return (6);
    if (str == "8")
        return (7);
    else
        std::cout << "Indice no valido" << std::endl;
    return (-1);
}

void    search_contact(phonebook *book)
{
    std::string buff;
    int i;

    i = 0;
    std::cout << std::endl << "|  Indice  |  Nombre  | Apellido |  Apodo   |" << std::endl;
    while (i < 8)
    {
        std::cout << "|" << get_short(index_str(i)) << "|";
        std::cout << get_short((book->cont[i]).get_name()) << "|";
        std::cout << get_short((book->cont[i]).get_last_name()) << "|";
        std::cout << get_short((book->cont[i]).get_nick()) << "|" << std::endl;
        i++;
    }
    std::cout << std::endl << "Introduce el indice del contacto deseado : ";
    std::cin >> buff;
    i = index_int(buff);
    if (i == -1)
        return ;
    std::cout << std::endl << "Nombre = " << (book->cont[i]).get_name() << std::endl;
    std::cout << "Apellido = " << (book->cont[i]).get_last_name() << std::endl;
    std::cout << "Nickname = " << (book->cont[i]).get_nick() << std::endl;
    std::cout << "Telefono = " << (book->cont[i]).get_phone() << std::endl;
    std::cout << "Secreto mas oscuro = " << (book->cont[i]).get_dark_secret() << std::endl << std::endl;
}

int main ()
{
    phonebook book;
    std::string buff;
    int i;

    i = 0;
    std::cout << "Comandos disponibles : ADD, SEARCH, EXIT" << std::endl;
    while (1)
    {
        std::cout << ">> ";
        std::cin >> buff;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        if (buff == "EXIT")
            return (1);
        if (buff == "ADD")
            add_new_contact(&book);
        if (buff == "SEARCH")
            search_contact(&book);
    }
    return (0);
}