#ifndef REPLACER_HPP
# define REPLACER_HPP
# include <iostream>
# include <fstream>

int throwError(std::string msg);
int	foundIndex(std::string content, std::string s1, std::string s2);
int	replacer(std::string filename, std::string s1, std::string s2);

#endif
