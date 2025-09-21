#include "./replacer.hpp"

int	main(int ac, char **av)
{
	//std::string	filename = "dfhdfh.cpp";
	//replacer(filename, ".hpp", "afa");
	//return (0);
	if (ac != 4)
		return (throwError("Usage: ./replacer <file_name> <str_to_replace> <str_to_replace_with>"));
	return (replacer(av[1], av[2], av[3]));
}