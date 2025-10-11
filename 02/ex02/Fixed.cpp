/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex02/Fixed.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-10-11 15:43
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-10-11 15:43
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(ref.getRawBits());
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = number * (1 << this->fractionalPart);
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(number * (float)(1 << this->fractionalPart));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(ref.getRawBits());
	return (*this);
}

Fixed	Fixed::operator+(const Fixed& ref)	const
{
	Fixed	res;

	res.setRawBits(getRawBits() + ref.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed& ref)	const
{
	Fixed	res;

	res.setRawBits(getRawBits() - ref.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed& ref)	const
{
	Fixed	res;

	res.setRawBits((getRawBits() * ref.getRawBits()) / (1 << this->fractionalPart));
	return (res);
}

Fixed	Fixed::operator/(const Fixed& ref)	const
{
	Fixed	res;

	int	fixedBitsFirst = getRawBits() * (1 << this->fractionalPart);
	res.setRawBits(( fixedBitsFirst / ref.getRawBits()));
	return (res);
}

bool	Fixed::operator>(const Fixed& ref)	const
{
	if (getRawBits() > ref.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& ref)	const
{
	if (getRawBits() < ref.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& ref)	const
{
	if (getRawBits() >= ref.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& ref)	const
{
	if (getRawBits() <= ref.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed& ref)	const
{
	if (getRawBits() == ref.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& ref)	const
{
	if (getRawBits() == ref.getRawBits())
		return (false);
	return (true);
}

Fixed&	Fixed::operator++()
{
	setRawBits(getRawBits() + 1);
	return (*this);
}

Fixed&	Fixed::operator--()
{
	setRawBits(getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(int a)
{
	(void)a;
	setRawBits(getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator--(int a)
{
	(void)a;
	setRawBits(getRawBits() - 1);
	return (*this);
}

Fixed&	Fixed::min(Fixed&a, Fixed&b)
{
	if (a < b)
		return (a);
	return(b);
}

Fixed&	Fixed::max(Fixed&a, Fixed&b)
{
	if (a > b)
		return (a);
	return(b);
}

const Fixed&	Fixed::min(const Fixed&a, const Fixed&b)
{
	if (a < b)
		return (a);
	return(b);
}


const Fixed&	Fixed::max(const Fixed&a, const Fixed&b)
{
	if (a > b)
		return (a);
	return(b);
}

int	Fixed::getRawBits(void)	const
{
	return(this->fixedPoint);
}

void	Fixed::setRawBits(int const val)
{
	this->fixedPoint = val;
}

int	Fixed::toInt(void)	const
{
	return (this->fixedPoint / (1 << this->fractionalPart));
}

float	Fixed::toFloat(void)	const
{
	return ((float)this->fixedPoint / (1 << this->fractionalPart));
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}
