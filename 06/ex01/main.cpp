#include "Serializer.hpp"

int	main(void)
{
	Data	ex;
	ex.x = 42;
	ex.y = 1337;
	ex.z = 7705;

	std::cout << "ex:\t(" << ex.x << ", " << ex.y << ", " << ex.z << ")\n";
	
	uintptr_t	mid = Serializer::serialize(&ex);

	std::cout << "mid:\t(" << mid << ")\n";

	Data	*last = Serializer::deserialize(mid);

	std::cout << "last:\t(" << last->x << ", " << last->y << ", " << last->z << ")\n";

	return 0;
}
