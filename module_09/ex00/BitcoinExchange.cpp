/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:29:35 by rgirondo          #+#    #+#             */
/*   Updated: 2023/04/12 16:38:43 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BitcoinExchange.hpp"

bool is_float(std::string str)
{
	bool point = false;
	if ((str[0] >= '0' && str[0] <= '9') || str[0] == '+' || str[0] == '-')
    {
		if ((str[0] == '-' || str[0] == '+') && str.size() >= 2 && (str[1] >= '0' && str[1] <= '9'))
			str[0] = '0';
        for (std::string::iterator it = str.begin(); it != str.end(); it++)
        {
			if (*it == '.' && point == true)
				return (false);
			if (*it == '.' && point == false)
				point = true;
            if (*it != '.' && !(*it >= '0' && *it <= '9'))
                return (false);
        }
        if (*(str.end() - 1) == '.')
            return (false);
        return(true);
    }
    return (false);
}

bool is_int(std::string str)
{
	if ((str[0] >= '0' && str[0] <= '9') || str[0] == '+' || str[0] == '-')
    {
		if ((str[0] == '-' || str[0] == '+') && str.size() >= 2 && (str[1] >= '0' && str[1] <= '9'))
			str[0] = '0';
        for (std::string::iterator it = str.begin(); it != str.end(); it++)
        {
            if (*it < '0' && *it > '9')
                return (false);
        }
        return(true);
    }
    return (false);
}

bool is_year(std::string str)
{
	if (str.c_str() == NULL)
		return false;
	return (is_int(str));
}

bool is_month(std::string str)
{
	if (str.c_str() == NULL)
		return false;
	if (is_int(str) == true && stoi(str) >= 0 && stoi(str) <= 12)
		return true;
	else
		return false;
}

bool is_day(std::string str)
{
	if (str.c_str() == NULL)
		return false;
	if (is_int(str) == true && stoi(str) >= 0 && stoi(str) <= 31)
		return true;
	else
		return false;
}

bool is_date(std::string str)
{
	std::stringstream	line(str);
	std::string			aux;


    getline(line, aux, '-');
	if (is_year(aux))
	{
        getline(line, aux, '-');
		if (is_month(aux))
		{	
            getline(line, aux, '-');
			if (is_day(aux))
			{
				return true;	
			}
		}	
		return false;
	}
	else
    {
		return false;
    }
}

void    BitcoinExchange::get_csv_data(std::string file)
{
    std::ifstream infile1(file);
    std::string line;

    getline(infile1, line);
    while (getline(infile1, line))
    {
        std::pair<std::string, float> parsed;
        std::stringstream aux1(line);
        std::string aux2;
        
        getline(aux1, aux2, ',');
        aux2.erase(std::remove_if(aux2.begin(), aux2.end(), isspace), aux2.end());
        if (is_date(aux2) == false)
            std::cout << "Error: bad input date => " << line << std::endl;
        else
        {
            parsed.first = aux2;
            getline(aux1, aux2, ',');
            aux2.erase(std::remove_if(aux2.begin(), aux2.end(), isspace), aux2.end());
            if (is_float(aux2) == false)
                std::cout << "Error: bad input value => " << line << std::endl;
            else
            {
                parsed.second = stof(aux2);
                _csv_data.insert(parsed);
            }
        }
    }
}

void BitcoinExchange::do_exchange(std::string file)
{
    std::ifstream infile1(file);
    std::string line;

    getline(infile1, line);
    while (getline(infile1, line))
    {
        std::stringstream aux1(line);
        std::string date;
        std::string value;
        
        getline(aux1, date, '|');
        date.erase(std::remove_if(date.begin(), date.end(), isspace), date.end());
        getline(aux1, value, '|');
        value.erase(std::remove_if(value.begin(), value.end(), isspace), value.end());
        if (is_date(date) == false)
            std::cout << "Error: bad input date => " << line << std::endl;
        else
        {
            if (is_float(value) == false)
                std::cout << "Error: bad input value => " << line << std::endl;
            else if (stof(value) < 0)
                std::cout << "Error: not a possitive number." << std::endl;
            else if (stof(value) > 1000)
                std::cout << "Error: too large a number." << std::endl;
            else
                std::cout << date << " => " << stof(value) << " = " << (_csv_data.lower_bound(date)->second) * stof(value) << std::endl;
        }
    }
}

BitcoinExchange::BitcoinExchange(BitcoinExchange &asg)
{
    *this = asg;
}

BitcoinExchange::BitcoinExchange(map_type &asg)
{
    _csv_data = asg;
}

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange &asg)
{
    _csv_data = asg._csv_data;
    return *this;
}