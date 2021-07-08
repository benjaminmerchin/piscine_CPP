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
