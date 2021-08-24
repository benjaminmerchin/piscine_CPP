#include "Array.hpp"

int main(void) {
	std::cout << "====================int====================" << std::endl;
	{
		Array <int> arr1(5);
		Array <int> arr2(4);

		for (int i = 0; i < 5; i++) {
			arr1[i] = i;
		}
		arr2 = arr1;
		std::cout << arr1[4] << std::endl;
		std::cout << arr2[4] << std::endl;
		
		try {
			std::cout << arr2[10] << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "====================str====================" << std::endl;
	{
		Array <std::string> arr_str1(5);
		Array <std::string> arr_str2(4);

		for (int i = 0; i < 5; i++) {
			std::string s = "0";
			s[0] += i;
			arr_str1[i] = s;
		}
		arr_str2 = arr_str1;
		std::cout << arr_str1[4] << std::endl;
		std::cout << arr_str2[4] << std::endl;
		
		try {
			std::cout << arr_str2[10] << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	return 0;
}
