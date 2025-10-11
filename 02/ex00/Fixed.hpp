/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex00/Fixed.hpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-10-10 02:36
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-10-10 02:36
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include <iostream>

class Fixed
{
	private:
		int					fixedPoint;
		static const int	fractionalPart = 8;
	public:
		Fixed();
		Fixed(const Fixed& ref);
		Fixed&	operator=(const Fixed& ref);
		~Fixed();
		int		getRawBits(void)	const;
		void	setRawBits(int const raw);
};
