#ifndef DIRECTORY_CLASS_HPP
# define DIRECTORY_CLASS_HPP

class Directory {
public:
	Directory(void);
	~Directory(void);
	void	add_contact();
	void	display() const;
	void	display_all() const;

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};

#endif