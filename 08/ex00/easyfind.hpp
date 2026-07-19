#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <exception>
# include <stdexcept>
# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &t, int val)
{
	typename	T::iterator it = std::find(t.begin(), t.end(), val);
	if (it != t.end())
		return (it);
	else
		throw (std::out_of_range("Value does not exist"));
}

template <typename T>
typename T::const_iterator	easyfind(const T &t, const int val)
{
	typename	T::const_iterator it = std::find(t.begin(), t.end(), val);
	if (it != t.end())
		return (it);
	else
		throw (std::out_of_range("Value does not exist"));
}

#endif