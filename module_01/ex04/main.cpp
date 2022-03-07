/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:57:11 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/07 18:21:35 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string my_replace(std::string str, std::string word1, std::string word2)
{
    size_t i;

    i = str.find(word1);
    while (i != std::string::npos)
    {
        str.erase(i, word1.length());
        str.insert(i, word2);
        i = str.find(word1);
    }
    return (str);
}

int main(int argc, char **argv)
{
    std::string str;

    if (argc != 4)
        std::cout << "Wrong amount of arguments : {./program file word1 word2}" << std::endl;
    else
    {
        std::ifstream ifs(argv[1]);
        if (!ifs)
        {
            std::cout << "Infile not found" << std::endl;
            return (0);
        }
        std::ofstream ofs((std::string)argv[1] + ".replace");
        while (std::getline(ifs, str))
        {
            str = my_replace(str, (std::string)argv[2], (std::string)argv[3]);
            ofs << str;
            ofs << std::endl;
        }
        ifs.close();
        ofs.close();
    }
    return (0);
}