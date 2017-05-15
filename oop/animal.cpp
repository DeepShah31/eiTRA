#include <iostream>
#include <stdio.h>
using namespace std;
class Animal {
public:  virtual void speak() = 0;
};
class Bird : public Animal {
public:  virtual void speak() { printf("twitter\n"); }
};
class Mammal : public Animal {
public:  virtual void speak() { printf("can't speak\n"); }
	   void bark() { printf("can't bark\n"); }
};
class Cat : public Mammal {
public:  void speak() { printf("meow\n"); }
	   virtual void purr() { printf("purrrrr\n"); }
};
class Dog : public Mammal {
public:  virtual void speak() { printf("wouf\n"); }
	   void bark() { printf("wouf\n"); }
};
int main(int argc, char const *argv[])
{
	Dog * d = new Dog();
	Mammal * m = d;
	d->bark(); 	// wouf
	m->bark();	// can't bark

d->speak();	// wouf
	m->speak();	// also wouf
	Animal * a = d;
	a->speak();	// and more wouf

d->bark();	// wouf
//	a->bark();	// compile error, not allowed

Mammal mm;
	mm = *d;
	mm.speak();	// can't speak
	d->speak();	// although dog will wouf
	return 0;
}