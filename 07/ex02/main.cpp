#include "Array.hpp"
#include <iostream>
#include <cstdlib>

#define SIZE 5

int	main(void)
{
	Array<int>	myArray(SIZE);
	int*		realArray = new int[SIZE];

	srand(time(NULL));
	for (unsigned int i = 0; i < SIZE; i++)
	{
		const int val = rand();
		myArray[i] = val;
		realArray[i] = val;
	}

	Array<int>	myArrayOpCopy = myArray;
	Array<int>	myArrayAsCopy(myArray);

	for (unsigned int i = 0; i < SIZE; i++)
	{
		if (realArray[i] != myArray[i] ||
			realArray[i] != myArrayAsCopy[i] ||
			realArray[i] != myArrayOpCopy[i])
			std::cout << "It seems the [" << i << "] is not valid." << std::endl;
	}

	std::cout << "myArray size:\t\t" << myArray.size() << std::endl;
	std::cout << "myArrayOpCopy size:\t" << myArrayOpCopy.size() << std::endl;
	std::cout << "myArrayAsCopy size:\t" << myArrayAsCopy.size() << std::endl;

	for (int i = -2; i <= SIZE; i++)
	{
		try
		{
			std::cout << "+++++++++ " << i << " +++++++++" << std::endl;
			std::cout << "myArray:\t" << myArray[i] << std::endl;
			std::cout << "myArrayOpCopy\t" << myArrayOpCopy[i] << std::endl;
			std::cout << "myArrayAsCopy\t"<< myArrayAsCopy[i] << std::endl;
			std::cout << "realArray\t" << realArray[i] << std::endl;
		} catch (const std::exception& e) { std::cout << e.what() << std::endl; }
	}
	delete[] realArray;
}
