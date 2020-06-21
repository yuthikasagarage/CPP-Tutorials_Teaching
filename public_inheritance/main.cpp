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

};


/*
 * making a subclass
 */

class student : public person{ // when we use access specifier, all the public members of the base class
	//is going to act as public members of the subclass,
	//all the protected members in base class is going to act as protected member of the subclass
	// this student can access non private member from the person

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
// name ----> which is a protected variable cannot accces like yuthika.name , it will give an error
	std::cout << "Hello, World!" << std::endl;
	return 0;
}