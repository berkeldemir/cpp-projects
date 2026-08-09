#include "BitcoinExchange.hpp"
#include <sstream>
#include <fstream>
#include <iostream>

bool	BitcoinExchange::validateDate(std::string date)
{
	// 2026-08-18
	// 2026-08-19
	if (date.size() != 10)
		return false;

	if (date[4] != '-' || date[7] != '-')
		return false;

	std::istringstream	m(date.substr(5,6));
	float	month;
	m >> month;
	std::istringstream	d(date.substr(8,9));
	float	day;
	d >> day;

	if (month <= 0 || month > 12)
		return false;

	if (day <= 0 || day > 31 )
		return false;
	
	return true;
}

float	BitcoinExchange::getRate(std::string date)
{
	std::map<std::string, float>::const_iterator	it = database.lower_bound(date);

	if (it == database.end() || it->first != date)
	{
		if (it == database.begin())
			throw std::runtime_error("Error: no available rate for date " + date);
		it--;
	}
	return (it->second);
}

////////////////////////////////////////////////////////////////////////////////

BitcoinExchange::BitcoinExchange() { }

BitcoinExchange::BitcoinExchange(std::string database) { putDb(database); }

BitcoinExchange::BitcoinExchange(const BitcoinExchange& r) : database(r.database) { }

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& r)
{
	if (this != &r)
		database = r.database;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() { }

////////////////////////////////////////////////////////////////////////////////

void	BitcoinExchange::putDb(std::string filename)
{
	std::ifstream	file(filename.c_str());
	std::string		line;

	if (!file.is_open())
		throw std::runtime_error("Error: no eligible to open the mentioned database.");

	std::getline(file, line);
	while (std::getline(file, line))
	{
		size_t	comma_pos = line.find(',');
		if (comma_pos == std::string::npos)
			throw std::runtime_error("Error: no comma found in a line, invalid database.");

		std::string	date = line.substr(0, comma_pos);
		if (!validateDate(date))
			throw InvalidDate();
	
		std::string	value = line.substr(comma_pos + 1);
		std::istringstream	valueStream(value);
		float	valueFloat;
		valueStream >> valueFloat;
		if (valueStream.fail())
			throw std::runtime_error("Error: invalid database entry: " + valueStream.str());

		if (valueFloat < 0)
			throw std::runtime_error("Error: not a positive number: " + valueStream.str());

		database.insert(std::make_pair(date, valueFloat));
	}
}

void	BitcoinExchange::giveInput(std::string filename)
{
	if (database.empty())
		throw std::runtime_error("Error: database not set.");

	std::ifstream	file(filename.c_str());
	std::string		line;

	if (!file.is_open())
		throw std::runtime_error("Error: no eligible to open the mentioned database.");

	while (std::getline(file, line))
	{
		size_t	sep = line.find('|');
		if (sep == std::string::npos)
		{
			std::cout << "Error: bad input: " << line << std::endl;
			continue ;
		}
		
		std::string	date = line.substr(0, sep - 1);
		if (!validateDate(date))
		{
			std::cout << "Error: not a valid date: " << date << std::endl;
			continue ;
		}

		std::string	value = line.substr(sep + 2);
		std::istringstream valueStream(value);
		float	valueFloat;
		valueStream >> valueFloat;
		if (valueStream.fail())
		{
			std::cout << "Error: not a valid number: " << line << std::endl;
			continue ;
		}
		if (valueFloat < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue ;
		}
		if (valueFloat > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue ;
		}

		std::cout << date << " => " << valueFloat << " = " << getRate(date) * valueFloat << std::endl;
	}
}

const char*	BitcoinExchange::InvalidDate::what() const throw()
{
	return ("Error: invalid date, valid date format is YYYY-MM-DD.");
}
