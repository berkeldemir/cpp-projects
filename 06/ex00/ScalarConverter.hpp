#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <cmath>
# include <iomanip>

# define IMPOSSIBLE "impossible"
# define NON_DISPLAYABLE "Non displayable"

enum	e_input_type
{
	ITYPE_POS_INF,
	ITYPE_NEG_INF,
	ITYPE_NAN,
	ITYPE_CHR,
	ITYPE_INT,
	ITYPE_FLT,
	ITYPE_DBL,
	ITYPE_UNEXPECTED
};

typedef struct	s_input
{
	e_input_type	_type;
	char			_chr;
	int				_int;
	float			_flt;
	double			_dbl;
}	t_input;

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& ref);
		ScalarConverter	operator=(const ScalarConverter& ref);
		
	public:
		static void	convert(const std::string& s);
		~ScalarConverter();
};

#endif