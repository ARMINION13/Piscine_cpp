/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:27:16 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/07 19:56:54 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int main(int argc, char **argv)
{
    Karen karen;

    if (argc != 2)
    {
        std::cout << "Parse error : {./program level}" << std::endl;
        return (1);
    }
    karen.complain((std::string)argv[1]);
    return (0);
}