#include <iostream>

#include <iostream>
using namespace std;

class person{

protected:
	string name;


public:
	void set_name(string iname){
		name = iname;

	}
	int age;

};


/*
 * making a subclass
 */

class student : protected person{ // when we use protected inheritance like this public and the protected memebers & member functions
	// will act as protected member functions in the subclass, so the "age" ---> which is a public member will be protected in this
	//subclass

public:
	void display(){
		cout<<name<<endl;
	}

};



int main()
{
	student yuthika;
	yuthika.set_name("yuthika");
	yuthika.display();
	// here we can't access the age variable like , yuthika.age because we used protected inheritance
	// because of that age has become a protected member in the subclass object

	person hasara;
	hasara.age = 28;
	// in the base class you can access this but since we inherited student class as a protected it's not
	// accessible in the student class

	std::cout << "Hello, World!" << std::endl;
	return 0;
}