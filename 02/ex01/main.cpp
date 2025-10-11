/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex01/main.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-10-10 03:12
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-10-10 03:12
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./Fixed.hpp"

int main(void)
{
	/*
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

	//const	int num = 42;
	//Fixed	number4(num);
	std::cout << number1.getRawBits() << std::endl;
	std::cout << number2.getRawBits() << std::endl;
	std::cout << number3.getRawBits() << std::endl;
	//std::cout << number4.getRawBits() << std::endl;
	std::cout << std::endl;

	Fixed	number(42.999f);

	std::cout << number << std::endl;

	*/

	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}