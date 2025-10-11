/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex01/Fixed.hpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-10-10 03:11
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-10-10 03:11
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include <iostream>
#include <math.h>

class	Fixed
{
	private:
		int					fixedPoint;
		static const int	fractionalPart = 8;
	public:
		Fixed();
		Fixed(const Fixed& ref);
		Fixed(const int	number);
		Fixed(const float number);
		Fixed&	operator=(const Fixed& ref);
		~Fixed();
		int		getRawBits(void)	const;
		void	setRawBits(int const raw);
		float	toFloat(void)	const;
		int		toInt(void)		const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);