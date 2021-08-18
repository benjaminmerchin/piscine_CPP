#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <iomanip>

class Convert {
public:

	class nonDisplayableException: public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Non displayable");
			}
	};

	class impossibleException: public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("impossible");
			}
	};

	Convert();
	Convert(std::string str);
	Convert(Convert const & src);
	~Convert();
	Convert & operator=(Convert const &rhs);

	std::string getStr() const;
	void setStr(std::string const str);

	char toChar();
	int toInt();
	float toFloat();
	double toDouble();

private:
	std::string _str;

};

#endif
