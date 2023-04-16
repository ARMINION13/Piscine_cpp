/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:53:27 by rgirondo          #+#    #+#             */
/*   Updated: 2023/04/16 14:40:47 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BitcoinExchange.hpp"

// void leaks()
// {
//     system("leaks btc");
// }

int main(int argc, char **argv)
{
    //atexit(leaks);
    BitcoinExchange csv_data;

    csv_data.get_csv_data("./data.csv");
    if (argc > 1)
        csv_data.do_exchange(std::string(argv[1]));
    else
        std::cout << "Error:" << " could not open file." << std::endl;
    
    return (0);
}