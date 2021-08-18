#include "Convert.hpp"

//input : char, int, float ou double

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Wrong number of arguments, only one string as parameter is expected\n";
		return 0;
	}

	Convert basic(av[1]);
	
	std::cout << "char: ";
	try {
		std::cout << basic.toChar() << std::endl;;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "int: ";
	try {
		std::cout << basic.toInt() << std::endl;;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "float: ";
	try {
		std::cout << std::fixed << std::setprecision(1) << basic.toFloat() << 'f' << std::endl;;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "double: ";
	try {
		std::cout << std::fixed << std::setprecision(1) << basic.toDouble() << std::endl;;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}


	return 0;
}

/*
try {
	    Child2 & d = dynamic_cast<Child2 &>(*b); // convert to a reference
	    // it will fail because it casts to another
	    // the reference can't be NULL by definition, so it needs another way
	    // to handle the cast failure
        std::cout << "Conversion is okay" << std::endl;
    }
    catch (std::bad_cast &bc){
	    std::cout << "Conversion is NOT okay: " << bc.what() << std::endl;
	    return 0;
    }*/