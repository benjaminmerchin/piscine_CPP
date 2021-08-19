# Piscine CPP
9 modules with progressives exercises to learn C++  
[There is plenty of CPP tutorial videos on the intranet (in french)](https://elearning.intra.42.fr/tags/38/notions)  
[Great Wiki for the piscine](https://github.com/qingqingqingli/CPP/wiki/)  


## Module 0
Print Hello World 5 on stdout:
```C++
int n = 5;
std::cout << "Hello World" << " " << n << std::endl;
```
Store input values separated by spaces in a, b and c:
```C++
int a, b, c;
std::cin >> a >> b >> c;
```
Reading Some data, alternative solution:
```C++
int a;
long b;
char c;
float d;
double e;
scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
```
Declare a string table:
```C++
string c[]={"","one","two","three","four"};
```
Namespaces :: the scope resolution operator
```C++
int gl_var = 1;
int f(void){return 2;}

namespace	Foo {
	int gl_var = 3;
	int f(void){return 3;}
}

namespace Bar = Foo;
```
```C++
printf("%d %d %d %d\n", gl_var, ::gl_var, Foo::gl_var, Bar::gl_var);
printf("%d %d %d\n", f(), Foo::f(), Bar::f());
```
Swap: (in this example case, swap the content of 2 strings)
```C++
seller.swap (buyer);
```
Classes:  
ClassName.class.hpp: way to structurize the code  
ClassName.class.cpp: way to structurize the code  
When the class is launched, the constructor function is called  
When the class is destructed, the destructor function is called  
Desctuctor and Constructors doesn't have return type
```C++
class Sample {

public:

	Sample(void); //constructor
	~Sample(void); //destructor

};
```
```C++
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
```C++
int main() {
	Sample new_instance; //declare a new instance of Sample class
						 //execute the constructor code
						 //when the main scope is finished, the destructor is called
	return 0;
}
```
Member attributes and member functions
```C++
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
```C++
void	Sample::bar(void) {
	std::cout  << "Member function called" << std::endl; //constructor
}
```
```C++
int main() {
	Sample new_instance;

	new_instance.foo = 42;
	std::cout << new_instance.foo;
	new_instance.bar();
	return 0;
}
```
Sample2
```C++
Sample2::Sample2(int foo2):foo(foo2) {
	std::cout << this->foo;
}
```
Const: Good to use as much of them as possible in the long term in the long term
```C++
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
```C++
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
```C++
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
```C++
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
```C++
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
```C++
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
```C++
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
```C++
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

## Module 2

Polymorphisme: Functions with the same name but different parameters  
Operator overload: Add more parameters  
```C++
Integer Integer::operator+(const Integer &rhs) const {
	return Integer(this->_n + rhs.getValue());
}
Integer & Integer::operator=(const Integer &rhs) {
	this->_n = rhs.getValue();
	return *this;
}
std::ostream & operator<<(std::ostream & o, Integer const & rhs){
	o << rhs.getValue();
	return o;
}
```
Canonical form: Standardize class  
```C++
#include <iostream>

class Sample {
public:
	Sample(void);		//Canonical form
	Sample(const int n);
	Sample(Sample const & src);	//Canonical form copy constructor
	virtual ~Sample(void);		//Canonical form

	Sample & operator=(Sample const & rhs);		//Canonical form

	int getFoo(void) const;

private:
	int _foo;
};

std::ostream & operator<<(std::ostream & o, Sample const & i);
```

## Module 3 & 4

Inheritance  
Mutualize some functions between classes  
Derivated class can be perceived as more precize classes  
New keyword completing public/privte : proteted : accessible from the class instance and from derivated classes.  

Two class Dog and Animals:  
Dog is a derivated class from Animal. (Add more precision) We can use Anima's protected function inside dog  
Dog inherit from Animal's functions.  

Use the keyword virtual if your compilator needs to verify if a function has been overwritten in a subclass  
You also need to use this keyword for destructors in order to avoid memory leaks
```C++
class ScavTrap : public ClapTrap {
public:
	virtual ~ScavTrap(void);

	virtual void attack(std::string const & target);
	...
};
```

Polymorphism  
A virtual member functin is a method.  
A pure method is initialized at 0. This means that we can't implement this method and we can't instance the class. The class therefore become an abstract class.  
An abstract class can't be instanciated, therefore if it has a name, it must be instanciated by its derivated class.  
For example in this case, the attack will be taken from a function in a derivated class.  
```C++
class ACharacter {
public:
	virtual void attack(std::string const & target) = 0;
	void sayHello(std::string const & target);
private:
	std::string _name;
};
```
If everything is abstract, it is called an Interface. Interfaces can't have attributes.
```C++
class ICoffeeMaker {
public:
	virtual void fillWatertank(IWaterSource * src) = 0;
	virtual Icoffee* makeCoffee(std::string const & type) = 0;
};
```

<!-- Note a moi-meme : J'ai vraiment besoin de savoir clairement ce que je dois faire dans un exercice, ensuite j'arrive a bien derouler. La ou je perds le plus de temps c'est de vouloir passer directement a l'execution sans avoir clairement la direction a prendre. -->

## Module 5

Nested Class  
Just a class inside a class.  
```C++
class Cat {
public:
    class Leg {
          //[...]
    };
};

int main() {
	Cat somecat; // instantiate the Cat class
	Cat::Leg somecatsleg; // instantiate the Leg class
}
```
Exceptions  
Manage errors properly, ty to not use them too much
```C++
#include <stdexcept>

void test1() {
	try {
        // Do some stuff here
        if (/*there is an error*/) {
            throw std::exception();
        }
        else {
        	// Do some more stuff
        }
    }
	catch (std::exception e) {
	    // handle the error here
    }
}

void test4() {
    class PEBKACException: public std::exception { // Clean way to handle eceptions
    	public:
    	    virtual const char* what() const throw() {
                return ("Problem exists between keyboard and chair");
            }
    };

    try {
    	test3();
    }
    catch (PEBKACException& e) { // specific catch
    	// handle the fact that the user did something stupid
    }
    catch (std::exception& e) { // generic catch
    	// handle other exceptions that are like std::exception
    }
}
```

Create a file and put text inside
```C++
int main()
{
    std::string filename("output.txt");
    fstream output_fstream;

    output_fstream.open(filename, std::ios_base::out);
    if (!output_fstream.is_open()) {
        std::cerr << "Failed to open " << filename << '\n';
    } else {
        output_fstream << "Maecenas accumsan purus id \norci gravida pellentesque." << std::endl;
        std::cerr << "Done Writing!" << std::endl;
    }

    return 0;
}
```

## Module 6
Casts  
Static cast:
```C++
int main(void)
{
	int a = 42; // reference value

	double b = a; // implicit promotion -> ok
	int c = b; // implicit demotion -> no!
	int d = static_cast<int>(b); // explicit demotion -> ok

	return 0;
}
int main(void) // now with class
{
	Child1 a; // reference value

	Parent * b = &a; // implicit upcast -> ok
	Child1 * c = b; // implicit downcast -> no!
	Child2 * d = static_cast<Child2 *>(b); // explicit downcast -> ok

	Unrelated * e = static_cast<Unrelated *>(&a); // explicit conversion -> no!
	// static_cast will make sure that the cast will happen within an inheritance tree
	return 0;
}
```
Dynamic cast: Very usefull, apply at the execution and not the compilation like the others  
Only works with polymophism (at least one of the members functions might be virtual)
```C++
#include <iostream>
#include <typeinfo> // This header defines types used related to operators typeid and dynamic_cast.
#include <exception>

class Parent {public: virtual ~Parent(void) {} };
class Child1: public Parent {};
class Child2: public Parent {};

int main(void)
{
	Child1 a; // reference value
	Parent * b = &a; // implicit upcast -> ok

    // explicit downcast
    Child1 * c = dynamic_cast<Child1 *>(b);
    if (c = NULL) {
    	std::cout << "Conversion is NOT okay" << std::endl;
    }
    else {
	    std::cout << "Conversion is okay" << std::endl;
    }

    // explicit downcast
    try {
	    Child2 & d = dynamic_cast<Child2 &>(*b); // convert to a reference
	    // it will fail because it casts to another
	    // the reference can't be NULL by definition, so it needs another way
	    // to handle the cast failure
        std::cout << "Conversion is okay" << std::endl;
    }
    catch (std::bad_cast &bc){ // possible to do catch (...) : super usefull can catch anything!
	    std::cout << "Conversion is NOT okay: " << bc.what() << std::endl;
	    return 0;
    }
    return 0;
}
```
Reingerpret cast:  
```C++
int main(void)
{
	float a = 420.042f; // reference value

	void * b = &a; // implicit promotion -> ok
	int * c = reinterpret_cast<int *>(b); // explicit demotion -> ok
	// there will be no semantics checks, as the compiler will trust you
	// they will reinterpret any address as the specified other type
	int & d = reinterpret_cast<int &>(b); // explicit demotion -> ok

	return 0;
}
```
Const cast:  
Try to never have to use this
```C++
int main(void)
{
	int a = 42; // reference value

	int const * b = &a; // implicit promotion -> ok
	// moving from a mutable value to a const is not a problem
	int * c = b; // explicit demotion -> no!
	int * d = const_cast<int *>(b); // explicit demotion -> ok
}
```
Cast operators:  
```C++
class Foo {
public:
	Foo(Float const v) : _v(v) {}
	operator float() {return this->_v;} // cast operator
	operator int() {return static_cast<int>(this->_V);} // cast operator
private:
    float _v;
};
int main(void)
{
	Foo a(420.024f);
	float b = a; // implicit cast from Foo to float
	int c = a; // implicit cast from Foo to int
    return 0;
}
```
Explicit Keyword:  
```C++
Class A {};
Class B {};

Class C {
public:
			C(A const & _) {return ;}
	explicit C(B const & _) {return ;} // will prevent implicit conversion of your instance class
};

void f(C const & _) {
	return ;
}

int main(void)
{
	f(A()); // implicit conversion okay
	f(B()); // implicit conversion not okay, constructor is explicit
}
```
-Wno-conversion: flag blocking implicit conversions with precision losses

## Module 7

Tempates  
