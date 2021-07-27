#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
public:
	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed & operator=(Fixed const & rhs);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _value_fixed_point;
	static const int _number_bits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
