#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <map>
# include <string>

class	BitcoinExchange
{
	private:
		std::map<std::string, float>	database;

		bool	validateDate(std::string date);
		float	getRate(std::string date);
	public:
		BitcoinExchange();
		BitcoinExchange(std::string database);
		BitcoinExchange(const BitcoinExchange& r);
		BitcoinExchange&	operator=(const BitcoinExchange& r);
		~BitcoinExchange();

		void	putDb(std::string filename);
		void	giveInput(std::string filename);

		class	InvalidDate : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
};

#endif