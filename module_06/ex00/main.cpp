/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:12:05 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/18 21:47:07 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

std::string ft_isnbr(std::string str)
{
    bool f = false;
    bool i = false;
    bool d = false;
    for (int it = 0; it < static_cast<int>(str.length()); it++)
    {
        if (it == 0 && (str[it] == '-' || str[it] == '+'))
        {
        }
        if ((str[it] >= '0' && str[it] <= '9') || str[it] == '.')
        {
            if (str[it] == '.' && (str[it + 1] >= '0' && str[it + 1] <= '9'))
                d = true;
        }
        if (str[it] == 'f' && str.length() > 1 && it == static_cast<int>(str.length() - 1))
        {
            f = true;
            d = false;
            break;
        }
        if ((str[it] < '0' || str[it] > '9') && str[it] != '.')
            return (str);
    }
    if (!d && !f)
        i = true;
    if (i)
        return ("int");
    if (d)
        return ("double");
    return ("float");
}

void print_vars(char c, int i, float f, double d)
{
    if (c >= 32 && c <= 127)
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    if (f == static_cast<int>(f))
        std::cout << "float: " << f << ".0f" << std::endl;
	else
        std::cout << "float: " << f << "f" << std::endl;
    if (d == static_cast<int>(d))
        std::cout << "double: " << d << ".0" << std::endl;
	else
        std::cout << "double: " << d << std::endl;
}

int main(int argc, char **argv)
{
    char c;
    int i;
    float f;
    double d;
    if (argc != 2)
    {
        std::cout << "Wrong arguments" << std::endl;
        return (-1);
    }
    std::string str = argv[1];
    std::string type = ft_isnbr(str);
    if (static_cast<int>(str.length()) == 1 && type == "nan")
    {
        c = str[0];
        i = static_cast<int>(c);
        f = static_cast<float>(c);
        d = static_cast<double>(c);
        print_vars(c, i, f, d);
        return (1);
    }
    if (type == "float")
    {
        f = std::stof(str);
        i = static_cast<int>(f);
        c = static_cast<char>(f);
        d = static_cast<double>(f);
        print_vars(c, i, f, d);
        return (1);
    }
    if (type == "double")
    {
        d = std::stof(str);
        i = static_cast<int>(d);
        c = static_cast<char>(d);
        f = static_cast<float>(d);
        print_vars(c, i, f, d);
        return (1);
    }
    if (type == "int")
    {
        i = std::stoi(str);
        d = static_cast<double>(i);
        c = static_cast<char>(i);
        f = static_cast<float>(i);
        print_vars(c, i, f, d);
        return (1);
    }
    if (static_cast<int>(str.length()) > 1 && (type == "nan" || type == "-inf" || type == "+inf"))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << type << "f" << std::endl;
        std::cout << "double: " << type << std::endl;
        return (-1);
    }
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return (-1); 
    }
    return (0);
}