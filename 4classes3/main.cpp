#include <iostream>
using namespace std;


class human{

public:
	string name = "ahaha";

private: // if we have a private members, variables in the class you cannot access it anywhere other than inside the class
	// so you have to declare and initialize it here

	int age;

	int get_age(){      // this is a private method it can be accessed only inside the class
		return age-5;
	}

public:

	void display_age(){ // so here you can't access this age directly
		// you have to set it from another function if you want to access it outside the class
		age =get_age();

		cout<<age<<endl;
	// we can use private methods to hide the internal working of the code.
	}
	void set_age(int value){

		age = value;
	}

};

int main()
{
	human yuthika;


	yuthika.set_age(28);
	yuthika.display_age();

	std::cout << yuthika.name << std::endl;
	return 0;
}