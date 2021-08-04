#include <iostream>
#include <string>
#include <fstream>

std::string	search_and_replace(std::string content, std::string s1, std::string s2)
{
	std::string output;

	for (unsigned long int i = 0; i < content.length(); i++)
	{
		for (unsigned long int j = 0; j < s1.length(); j++)
		{
			if (content[i + j] == s1[j] && j == s1.length() - 1)
			{
				output += s2;
				i += s1.length() - 1;
			}
			else if (content[i + j] == s1[j])
				;
			else
			{
				output += content[i];
				break ;
			}
		}
	}
	return output;
}

int main(int ac, char **av)
{
	std::string s1;
	std::string s2;
	std::string output_name;
	std::string temp;
	std::string content;

	if (ac != 4)
	{
		std::cout << "Error: wrong number of arguments\n";
		return (1);
	}
	s1 = av[2];
	s2 = av[3];
	if (s1.length() < 1 || s2.length() < 1)
	{
		std::cout << "Error: empty string\n";
		return (1);
	}
	std::ifstream	ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "Error: open failed\n";
		return (1);
	}
	output_name = av[1];
	output_name += ".replace";
	while (getline(ifs, temp))
	{
		content += temp;
		if (!ifs.eof())
			content += "\n";
	}
	content = search_and_replace(content, s1, s2);
	std::ofstream ofs(output_name.c_str());
	ofs << content;
	return (0);
}
