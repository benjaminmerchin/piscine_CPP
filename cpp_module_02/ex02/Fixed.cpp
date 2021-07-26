#include "Fixed.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Fixed::Fixed(void) : _value_fixed_point(0) {
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
//	std::cout << "Int constructor called" << std::endl;
	_value_fixed_point = n << _number_bits;
}

Fixed::Fixed(const float f) {
//	std::cout << "Float constructor called" << std::endl;
	_value_fixed_point = round(f * (1 << _number_bits));
}

Fixed::Fixed(Fixed const & src) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
//	std::cout << "Destructor called" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

Fixed & Fixed::operator=(Fixed const & rhs) {
	this->_value_fixed_point = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const & rhs) const {
	return (toFloat() > rhs.toFloat());
}

bool Fixed::operator<(Fixed const & rhs) const {
	return (toFloat() < rhs.toFloat());
}

bool Fixed::operator>=(Fixed const & rhs) const {
	return (toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(Fixed const & rhs) const {
	return (toFloat() <= rhs.toFloat());
}

bool Fixed::operator==(Fixed const & rhs) const {
	return (toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(Fixed const & rhs) const {
	return (toFloat() != rhs.toFloat());
}

Fixed Fixed::operator+(const Fixed & rhs) const {
	return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed & rhs) const {
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed & rhs) const {
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed & rhs) const {
	return Fixed(toFloat() / rhs.toFloat());
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

int Fixed::getRawBits(void) const {
	return _value_fixed_point;
}

void Fixed::setRawBits(int const raw) {
	_value_fixed_point = raw;
}

float Fixed::toFloat(void) const {
	return (round(_value_fixed_point) / (1 << _number_bits));
}

int Fixed::toInt(void) const {
	return _value_fixed_point >> _number_bits;
}
