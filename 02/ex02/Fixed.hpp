/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex02/Fixed.hpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-10-11 15:43
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-10-11 15:43
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
		~Fixed();

		Fixed&	operator=(const Fixed& ref);
		Fixed	operator+(const Fixed& ref)		const;
		Fixed	operator-(const Fixed& ref)		const;
		Fixed	operator*(const Fixed& ref)		const;
		Fixed	operator/(const Fixed& ref)		const;

		bool	operator>(const Fixed& ref)		const;
		bool	operator<(const Fixed& ref)		const;
		bool	operator>=(const Fixed& ref)	const;
		bool	operator<=(const Fixed& ref)	const;
		bool	operator==(const Fixed& ref)	const;
		bool	operator!=(const Fixed& ref)	const;
		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed&	min(Fixed&a, Fixed&b);
		static Fixed&	max(Fixed&a, Fixed&b);
		
		static const Fixed&	min(const Fixed&a, const Fixed&b);
		static const Fixed&	max(const Fixed&a, const Fixed&b);

		int		getRawBits(void)				const;
		void	setRawBits(int const val);
		float	toFloat(void)					const;
		int		toInt(void)						const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);
