#include <iostream>
using namespace std;

// EVERY OBJECT OF THE C++ HAS THE ACCESS TO THEIR OWN ADDRESS VIA THE "THIS" KEYWORD
// "THIS" IS A POINTER TO THE ADDRESS OF THE OBJECT
// THIS POINTER IS AN IMPLICIT PARAMETER TO ALL MEMBER FUNCTIONS
// INSIDE A MEMBER FUNCTION THIS CAN BE USED FOR INVOKING THE OBJECT
// FRIEND FUNCTIONS ARE EXCEPTED SINCE IT IS NOT A MEMBER FUNCTINO WHEN WE USE KEYWORD FRIEND


class person{
private:
	int age;

public:
	void set_age(int iage){
		this->age = iage;
	}

	void not_set(int age){
		this->age = age;
	}

	void show_age(){
		cout << this->age <<endl;
	}

};
// THIS POINTER CONTAINS THE ADDRESS OF THE OBJECT
int main()
{
	person yuthika; // when we make an object, object has a implicit pointer which is an address

	yuthika.set_age(24);
	yuthika.show_age(); // here it doesn't matter whether we use this explicitly however if we're using same names it's better to use this

	yuthika.not_set(25);
	yuthika.show_age(); // this will print a garbage value since we have not used this when using same names
// modern compilers are intelligent
	std::cout << "Hello, World!" << std::endl;
	return 0;
}