#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template	<typename Type>
	void	swap(Type &x, Type &y)
	{
		Type	tmp = x;
		x = y;
		y = tmp;
	}

template	<typename Type>
	Type&	max(Type& x, Type& y)
	{
		if (x > y)
			return (x);
		return (y);
	}

template	<typename Type>
	Type&	min(Type& x, Type& y)
	{
		if (x < y)
			return (x);
		return (y);
	}

#endif 