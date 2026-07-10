#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& ref) { (void)ref; }

ScalarConverter	ScalarConverter::operator=(const ScalarConverter& ref) { (void)ref; return (*this); }

ScalarConverter::~ScalarConverter() {}

bool	isThereWhiteSpace(const std::string& s)
{
	for (size_t i = 0; i < s.size(); i++)
		if (static_cast<unsigned char>(s[i]) == ' ')
			return true;
	return false;
}

bool	check(const std::string& s)
{
	if (s.empty() || isThereWhiteSpace(s))
		return (false);
	return (true);
}

bool	isNumber(char c)
{
	return (c <= '9' && c >= '0');
}

// CHAR PRINTING FUNCTION
void	putChar(const t_input& input)
{
	std::cout << "char: ";

	int	charValue = 0;

	if (input._type == ITYPE_CHR)
		charValue = static_cast<int>(input._chr);
	else if (input._type == ITYPE_INT)
	{
		if (input._int < 0 || input._int > 127)
		{
			std::cout << IMPOSSIBLE << std::endl;
			return;
		}
		charValue = input._int;
	}
	else if (input._type == ITYPE_FLT)
	{
		if (input._flt < 0.0f || input._flt > 127.0f)
		{
			std::cout << IMPOSSIBLE << std::endl;
			return;
		}
		charValue = static_cast<int>(input._flt);
	}
	else if (input._type == ITYPE_DBL)
	{
		if (input._dbl < 0.0 || input._dbl > 127.0)
		{
			std::cout << IMPOSSIBLE << std::endl;
			return;
		}
		charValue = static_cast<int>(input._dbl);
	}
	else
	{
		std::cout << IMPOSSIBLE << std::endl;
		return;
	}

	if (charValue < 32 || charValue == 127)
		std::cout << NON_DISPLAYABLE;
	else
		std::cout << "'" << static_cast<char>(charValue) << "'";

	std::cout << std::endl;
}

// INTEGER PRINTING FUNCTION
void	putInt(const t_input& input)
{
	std::cout << "int: ";

	if (input._type == ITYPE_CHR)
		std::cout << static_cast<int>(input._chr);
	else if (input._type == ITYPE_INT)
		std::cout << input._int;
	else if (input._type == ITYPE_FLT)
	{
		if (input._flt < static_cast<float>(std::numeric_limits<int>::min()) || 
			input._flt > static_cast<float>(std::numeric_limits<int>::max()))
			std::cout << IMPOSSIBLE;
		else
			std::cout << static_cast<int>(input._flt);
	}
	else if (input._type == ITYPE_DBL)
	{
		if (input._dbl < static_cast<double>(std::numeric_limits<int>::min()) || 
			input._dbl > static_cast<double>(std::numeric_limits<int>::max()))
			std::cout << IMPOSSIBLE;
		else
			std::cout << static_cast<int>(input._dbl);
	}
	else
		std::cout << IMPOSSIBLE;
	std::cout << std::endl;
}

// FLOAT PRINTING FUNCTION
void	putFloat(const t_input& input)
{
	std::cout << "float: ";

	if (input._type == ITYPE_POS_INF)
		std::cout << "+inf";
	else if (input._type == ITYPE_NEG_INF)
		std::cout << "-inf";
	else if (input._type == ITYPE_NAN)
		std::cout << "nan";
	else if (input._type == ITYPE_CHR)
		std::cout << std::fixed << std::showpoint << std::setprecision(1) << static_cast<float>(input._chr);
	else if (input._type == ITYPE_INT)
		std::cout << std::fixed << std::showpoint << std::setprecision(1) << static_cast<float>(input._int);
	else if (input._type == ITYPE_FLT)
		std::cout << std::fixed << std::showpoint << std::setprecision(1) << input._flt;
	else if (input._type == ITYPE_DBL)
		std::cout << std::fixed << std::showpoint << std::setprecision(1) << static_cast<float>(input._dbl);

	std::cout << "f" << std::endl;
}

// DOUBLE PRINTING FUNCTION
void	putDouble(const t_input& input)
{
	std::cout << "double: ";

	if (input._type == ITYPE_POS_INF)
		std::cout << "+inf";
	else if (input._type == ITYPE_NEG_INF)
		std::cout << "-inf";
	else if (input._type == ITYPE_NAN)
		std::cout << "nan";
	else if (input._type == ITYPE_CHR)
		std::cout << std::fixed << std::showpoint << std::setprecision(1) << static_cast<double>(input._chr);
	else if (input._type == ITYPE_INT)
		std::cout << std::fixed << std::showpoint << std::setprecision(1)  << static_cast<double>(input._int);
	else if (input._type == ITYPE_FLT)
		std::cout << std::fixed << std::showpoint << std::setprecision(1)  << static_cast<double>(input._flt);
	else if (input._type == ITYPE_DBL)
		std::cout << std::fixed << std::showpoint << std::setprecision(1)  << input._dbl;

	std::cout << std::endl;
}

t_input	convertInputToItsOwnType(const std::string& s)
{
	t_input				input;
	std::stringstream	stream(s);

	input._chr = 0;
	input._int = 0;
	input._flt = 0.0f;
	input._dbl = 0;
	input._type = ITYPE_UNEXPECTED;

	if (s == "inf" || s == "inff" || s == "+inf" || s == "+inff")
	{
		input._type = ITYPE_POS_INF;
		return input;
	}
	else if (s == "-inf" || s == "-inff")
	{
		input._type = ITYPE_NEG_INF;
		return input;
	}
	else if (s == "nan" || s == "nanf")
	{
		input._type = ITYPE_NAN;
		return input;
	}
	else if (s.size() == 1 && !isNumber(s[0]))
	{
		input._chr = s[0];
		input._type = ITYPE_CHR;
		return input;
	}
	else if ((s.size() > 0 && isNumber(s[0])) || (s.size() > 1 && isNumber(s[1])))
	{
		size_t	it = 0;
		for (size_t i = 0; i < s.size() ; i++)
			if (isNumber(s[i]))
				it++;

		if (it == s.size() || (it == s.size() - 1 && s[0] == '-'))
		{
			stream >> input._int;
			if (stream.fail())
				return input;
			input._type = ITYPE_INT;
			return input;
		}
		else if (s.find(".") != std::string::npos)
		{
			if (s[0] == '.' || *s.rbegin() == '.')
				return input;
			else if ((it == s.size() - 1) || (it == s.size() - 2 && s[0] == '-'))
			{
				stream >> input._dbl;
				if (stream.fail())
					return input;
				input._type = ITYPE_DBL;
				return input;
			}
			else if ((it == s.size() - 2 &&
					(*s.rbegin() == 'f' || *s.rbegin() == 'F')) ||
					(it == s.size() - 3 && s[0] == '-' &&
					(*s.rbegin() == 'f' || *s.rbegin() == 'F')))
			{
				if ((s.rbegin())[1] == '.')
					return input;
				stream >> input._flt;
				if (stream.fail())
					return input;
				input._type = ITYPE_FLT;
				return input;
			}
		}
	}
	return input;
}

void	ScalarConverter::convert(const std::string& s)
{
	if (!check(s))
	{
		std::cout << "Parse Error!" << std::endl;
		return ;
	}

	t_input input = convertInputToItsOwnType(s);
	if (input._type == ITYPE_UNEXPECTED)
	{
		std::cout << "Input error!" << std::endl;
		return ;
	}

	putChar(input), putInt(input), putFloat(input), putDouble(input);
}
