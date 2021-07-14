# Piscine CPP
9 modules with progressives exercises to learn C++  
[There is plenty of CPP tutorial videos on the intranet (in french)](https://elearning.intra.42.fr/tags/38/notions)  
[Great Wiki for the piscine](https://github.com/qingqingqingli/CPP/wiki/)  


## Module 0
Print Hello World 5 on stdout:
```
int n = 5;
std::cout << "Hello World" << " " << n << std::endl;
```
Store input values separated by spaces in a, b and c:
```
int a, b, c;
std::cin >> a >> b >> c;
```
Reading Some data, alternative solution:
```
int a;
long b;
char c;
float d;
double e;
scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
```
Declare a string table:
```
string c[]={"","one","two","three","four"};
```
Namespaces :: the scope resolution operator
```
int gl_var = 1;
int f(void){return 2;}

namespace	Foo {
	int gl_var = 3;
	int f(void){return 3;}
}

namespace Bar = Foo;
```
```
printf("%d %d %d %d\n", gl_var, ::gl_var, Foo::gl_var, Bar::gl_var);
printf("%d %d %d\n", f(), Foo::f(), Bar::f());
```
Swap: (in this example case, swap the content of 2 strings)
```
seller.swap (buyer);
```
Classes:  
ClassName.class.hpp: way to structurize the code  
ClassName.class.cpp: way to structurize the code  
When the class is launched, the constructor function is called  
When the class is destructed, the destructor function is called  
Desctuctor and Constructors doesn't have return type
```
class Sample {

public:

	Sample(void); //constructor
	~Sample(void); //destructor

};
```
```
Sample::Sample(void) { //usefull to initialize values
	std::cout  << "Constructor called" << std::endl; //constructor
	this->foo = 42; //this is a pointer so ->
	this->bar();
	return;
}
Sample::~Sample(void) {
	std::cout  << "Destructor called" << std::endl; //destructor
}
```
```
int main() {
	Sample new_instance; //declare a new instance of Sample class
						 //execute the constructor code
						 //when the main scope is finished, the destructor is called
	return 0;
}
```
Member attributes and member functions
```
class Sample {

public:
	int foo; //member attribute
	Sample(void); //constructor
	~Sample(void); //destructor
	void	bar(void); //member function
	void	hello(int foo2); //function with parameters
private: //what doesn't matter outside the class
	int _private_val; //accessible only from inside the class
						//good practice to put _ in front of private func/val
};
```
```
void	Sample::bar(void) {
	std::cout  << "Member function called" << std::endl; //constructor
}
```
```
int main() {
	Sample new_instance;

	new_instance.foo = 42;
	std::cout << new_instance.foo;
	new_instance.bar();
	return 0;
}
```
Sample2
```
Sample2::Sample2(int foo2):foo(foo2) {
	std::cout << this->foo;
}
```
Const: Good to use as much of them as possible in the long term in the long term
```
class Sample {

public:
	float const pi;
	int qd;
	Sample(float const f);
	~Sample(void);
	void	bar(void) const; //no modification of the current instance
							//great for protection of the code
							//always put const if no modif on class instance
};
```
```
Sample::Sample(float const f):pi(f), qd(42) { //we initialize the constant
	std::cout  << "Constructor called" << std::endl;
	return
}
Sample::~Sample(void) {
	std::cout  << "Destructor called" << std::endl;
	return;
}
Sample::bar(void) const {
	return;
}
```
A structure has a default scope public  
A class has a default scope private  
Appart from this, it is the same  
It is better to use by default a class  
  
Good practice (accessors):
```
class Sample {

public:
	Sample(void);
	~Sample(void);

	int get_foo(void) const;
	void set__foo(int v);
private:
	int	_foo;

};
```
<!--
Variables et fonctions d'instance pour les attributs et fonctions membres (propre a l'instance unique)
Variables et fonctions de classes pour les attributs et fonctions non membres (static) (ne peut pas utiliser this, car pas de transmission d'instance) (commune a toutes les instances)
int	Sample::getNbInst(void) {
	return Sample::_nbInst;
}
-->
Pointers to members:
```
int main() {
	Sample		instance;
	Sample *	point_instance = &insrance;
	int			Sample::*p = NULL;
	void		(Sample::*f)(void) const;

	p = &Sample::foo; //at this point p has no instance attributed
	instance.*p = 21; //now it is linked to the instance instance
	point_instance->*p = 42;
	std::cout  << instance.foo << std::endl;

	f = &Sample::bar;
	(instance.*f)();
	(point_instance->*f)();
	return 0;
}
```
## Module 1
Allocate memory
```
int main()
{
	Student		bob = Student("bmerchin"); //call constructor to use it correctly
	Student*	jim = new Student("stonks");
	Car*		car1 = new Car[42]; //new array doesn't take parameters

	delete jim; // jim destroyed
	delete [] car1;
	return (0); // bob destroyed
}
```
References : Alias to existing variables
Constant pointer always dereferenced and never null
Impossible to create uninitialized references
```
void byRef(std::string& str) {
	str += " and ponies";
}
void byConstRef(std::string const & str) {
	std::cout << str << std::endl;
}
int main() {
	std::string		str = "i like otters";
	std::string&	strRef = str; //we can use strRef as str

	byRef(str);
	byConstRef(str);
	return (0);
}
```
```
#include <iostream>
#include <string>

class Student
{
	private:
		std::string _login;

	public:
		Student(std::string const & login) : _login(login)
		{
		}

		std::string&	getLoginRef()
		{
			return this->_login;
		}

		std::string const & getLoginRefConst() const
		{
			return this->_login;
		}

		std::string*	getLoginPtr()
		{
			return &(this->_login);
		}

		std::string const * getLoginPtrConst() const
		{
			return &(this->_login);
		}
};

int main()
{
	Student 	bob = Student("bfubar");
	Student const jim = Student("jfubar");

	// use a const function on a non-const variable is not a problem
	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	return (0);
}
```
Filestream
```
#include <iostream>
#include <fstream>

int main()
{
	//ifstream: input file stream
	std::ifstream	ifs("numbers");
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	//-------------------------
	//ofstream: output file stream
	std::ofstream	ofs("test.out");
	ofs << "i like ponies a whole damn lot" << std::endl;
	ofs.close();
	return (0);
}
```











<!--
OpenClassRooms:
cin.ignore(); // quand je melange du cin avant du getline

-->
