#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <stdint.h>

typedef struct	s_data
{
	int	x;
	int	y;
	int z;
}	Data;

class	Serializer
{
	private:
		Serializer();
		Serializer(const Serializer& ref);
		Serializer	operator=(const Serializer& ref);

	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
		~Serializer();
};

#endif