#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>
# include <map>

class Karen;
typedef void (Karen:: *function_pointer)();

class Karen {
public:
	Karen(void);
	~Karen(void);
	void	complain(std::string level);

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
    std::map<std::string, function_pointer>	_function_table;

};

#endif
