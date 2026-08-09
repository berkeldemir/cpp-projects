#include "BitcoinExchange.hpp"
#include <stdexcept>
#include <iostream>

int main(int ac, char** av)
{
	if (ac != 2)
		throw   std::invalid_argument("Usage: ./btc <input_file_name>");

	std::string		database_filename = "data.csv";

	try
	{
		BitcoinExchange	app(database_filename);
		app.giveInput(av[1]);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
}
