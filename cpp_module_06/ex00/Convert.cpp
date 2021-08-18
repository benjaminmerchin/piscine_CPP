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

char Convert::toChar() {
	char c = static_cast<char>(this->toInt());
	if (c < ' ' || c > '~') {
		throw Convert::nonDisplayableException();
	}
	return c;
}

int Convert::toInt() {
	int i;

	try {
		i = static_cast<int>(std::stoi(_str.c_str()));
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
		f = static_cast<float>(std::stof(_str.c_str()));
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
		d = static_cast<double>(std::stod(_str.c_str()));
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
