#include "./replacer.hpp"

int	throwError(std::string msg)
{
	std::cerr << msg << std::endl;
	return (1);
}

int	foundIndex(std::string content, std::string s1)
{
	return (content.find(s1));
}

int	replacer(std::string filename, std::string s1, std::string s2)
{
	std::string		content;
	std::ifstream	readFrom;
	std::ofstream	putInto;
	int				i = 0;
	int				j = 0;

	readFrom.open(filename.c_str());
	if (!readFrom)
		return (throwError("Error opening " + filename + "!"));

	putInto.open((filename + ".replace").c_str());
	if (!putInto)
		return (readFrom.close(), throwError(filename + ".replace couldn't be created!"));

	for (std::string s; std::getline(readFrom, s) && ++i;)
		content += s + "\n";
	if (i > 0)
		content.erase(content.length() - 1, content.length()); // content.pop_back() was not available for std++98

	if (s1.length() > 0 && s1.compare(s2) != 0)
	{
		i = foundIndex(&content[0], s1);
		while (i > 0)
		{
			content.erase(i, s1.length());
			content.insert(i, s2);
			i += s2.length();
			if ((unsigned long)i < content.size())
			{
				j = foundIndex(&content[i], s1);
				if (j > 0)
					i += j;
				else 
					break ;
			}
			else
				break ;
		}
	}
	putInto << content;
	readFrom.close();
	putInto.close();
	std::cout << "Done, check out the file: " \
	<< filename + ".replace" << std::endl \
	<< ">powered by beldemir<" << std::endl;
	return (0);
}
