#include "Fixed.hpp"

// float-int-fixed_point conversion:
// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/

Fixed::Fixed(void) : _value_fixed_point(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	_value_fixed_point = n << _number_bits;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	_value_fixed_point = round(f * (1 << _number_bits));
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value_fixed_point = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
//	std::cout << "getRawBits member function called" << std::endl;
	return _value_fixed_point;
}

void Fixed::setRawBits(int const raw) {
//	std::cout << "setRawBits member function called" << std::endl;
	_value_fixed_point = raw;
}

float Fixed::toFloat(void) const {
	return (round(_value_fixed_point) / (1 << _number_bits));
}

int Fixed::toInt(void) const {
	return _value_fixed_point >> _number_bits;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}
