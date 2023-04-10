/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:29:39 by rgirondo          #+#    #+#             */
/*   Updated: 2023/04/10 21:03:34 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BITCOIN_EXCHANGE_
#define _BITCOIN_EXCHANGE_

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <string>

class BitcoinExchange
{
    typedef std::map<std::string, float> map_type;
    private:
        map_type _csv_data;
    public:
        BitcoinExchange(BitcoinExchange &asg);
        BitcoinExchange(map_type &asg);
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange &operator=(BitcoinExchange &asg);
        void get_csv_data(std::string file);
        void do_exchange(std::string file);
};

#endif