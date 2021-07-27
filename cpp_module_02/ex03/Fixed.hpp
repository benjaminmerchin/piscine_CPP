#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <string>

class Fixed {
public:
	Fixed(void);
	Fixed(const int n);
	Fixed(const float f);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed & operator=(Fixed const & rhs);
	Fixed operator+(Fixed const & rhs) const;
	Fixed operator-(Fixed const & rhs) const;
	Fixed operator*(Fixed const & rhs) const;
	Fixed operator/(Fixed const & rhs) const;
	bool operator>(Fixed const & rhs) const;
	bool operator<(Fixed const & rhs) const;
	bool operator>=(Fixed const & rhs) const;
	bool operator<=(Fixed const & rhs) const;
	bool operator==(Fixed const & rhs) const;
	bool operator!=(Fixed const & rhs) const;
	Fixed & operator++(void);
	Fixed operator++(int);
	Fixed & operator--(void);
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed const & min(Fixed const & a, Fixed const & b);
	static Fixed const & max(Fixed const & a, Fixed const & b);

private:
	int _value_fixed_point;
	static const int _number_bits = 8;
};

Fixed & min(Fixed & a, Fixed & b);
Fixed & max(Fixed & a, Fixed & b);
std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
