#include "Convert.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Convert::Convert() : _str("") {
	//std::cout << "Convert created with default constructor" << std::endl;
}

Convert::Convert(std::string str) : _str(str) {
	//std::cout << "Convert created with string" << std::endl;
}

Convert::Convert(Convert const & src) {
	_str = src.getStr();
	//std::cout << "Convert created with src constructor" << std::endl;
}

Convert::~Convert() {
	//std::cout << "Convert destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

Convert & Convert::operator=(Convert const & rhs) {
	_str = rhs.getStr();
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string Convert::getStr() const {return _str;}
void Convert::setStr(std::string const str) {_str = str;}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

bool Convert::onlyDigit() {
	bool res = true;
	for (int i = 0; _str[i]; i++)
		if (!(_str[i] >= '0' && _str[i] <= '9') && _str[i] != '.' && _str[i] != 'f' && _str[i] != '-')
			res = false;
	return res;
}

char Convert::toChar() {
	if (onlyDigit()) {
		int i;
		try {
			i = toInt();
		}
		catch (std::exception & e) {
			throw Convert::impossibleException();
			return 0;
		}
		if (i < 0 || i > 127) {
			throw Convert::impossibleException();
			return 0;
		}
		if (i < ' ' || i > '~') {
			throw Convert::nonDisplayableException();
			return 0;
		}
		return static_cast<char>(i);
	}
	if (_str.length() > 1) {
		throw Convert::impossibleException();
		return 0;
	}
	char c = static_cast<char>(_str[0]);
	if (c < ' ' || c > '~') {
		throw Convert::nonDisplayableException();
	}
	return c;
}

int Convert::toInt() {
	int i;

	try {
		i = static_cast<int>(std::strtod(_str.c_str(), NULL));
		if (i <= -2147483648 || i >= 2147483647) {
			throw Convert::impossibleException();
			return 0;
		}
		return i;
	}
	catch (std::invalid_argument& e) {
		throw Convert::impossibleException();
		return 0;
	}
	catch (std::out_of_range& e) {
		throw Convert::impossibleException();
		return 0;
	}
}

float Convert::toFloat() {
	float f;

	try {
		f = static_cast<float>(std::strtof(_str.c_str(), NULL));
		return f;
	}
	catch (std::invalid_argument& e) {
		throw Convert::impossibleException();
		return 0;
	}
	catch (std::out_of_range& e) {
		throw Convert::impossibleException();
		return 0;
	}
}

double Convert::toDouble() {
	double d;

	try {
		d = static_cast<double>(std::strtod(_str.c_str(), NULL));
		return d;
	}
	catch (std::invalid_argument& e) {
		throw Convert::impossibleException();
		return 0;
	}
	catch (std::out_of_range& e) {
		throw Convert::impossibleException();
		return 0;
	}
}
