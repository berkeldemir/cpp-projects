/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex00/main.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-10-10 02:56
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-10-10 02:56
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./Fixed.hpp"

int main(void)
{
	Fixed	number1;
	std::cout << number1.getRawBits() << std::endl;
	std::cout << std::endl;

	number1.setRawBits(4);
	std::cout << number1.getRawBits() << std::endl;
	std::cout << std::endl;

	Fixed	number2(number1);
	std::cout << number1.getRawBits() << std::endl;
	std::cout << number2.getRawBits() << std::endl;
	std::cout << std::endl;


	number2.setRawBits(2);
	std::cout << number1.getRawBits() << std::endl;
	std::cout << number2.getRawBits() << std::endl;
	std::cout << std::endl;

	Fixed	number3 = number1;
	std::cout << number1.getRawBits() << std::endl;
	std::cout << number2.getRawBits() << std::endl;
	std::cout << number3.getRawBits() << std::endl;
	std::cout << std::endl;
}
