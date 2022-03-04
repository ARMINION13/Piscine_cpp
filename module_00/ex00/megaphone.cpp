/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:47:23 by rgirondo          #+#    #+#             */
/*   Updated: 2022/02/28 17:17:48 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char use_caps(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
}

int main (int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
            std::cout << use_caps(argv[i][j++]);
        i++;
    }
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}