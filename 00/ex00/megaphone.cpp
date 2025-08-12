#include <iostream>

void	loud(char const*str)
{
	char    c;

	while (*str)
	{
		c = *str;
		if (c <= 'z' && c >= 'a')
			c = c - 'a' + 'A';
		std::cout << c;
		str++;
	}
}

int	main(int const ac, char const*const* av)
{
	int i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
		return 0;
	}
	i = 0;
	while (++i < ac)
		loud(av[i]);
	std::cout << '\n';
	return (0);
}
