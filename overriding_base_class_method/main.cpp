#include <iostream>

using namespace std;

class person{
public:
	void introduce(){
		cout<<"i am a person"<<endl;
	}


};

class student : public person {
public:
	void introduce(){ // here the method from the base class is overridden has to e the same signature
		// type and arguments and name of the member function

		cout << "hi am a student not a  person" << endl;
		person::introduce(); // can do it here we can cal the introduce method inside a function but not outside of the scope of the
		//overridden function
	}

	// cannot do it here ,
	//friend is used for accessing the private variables outside the class not for overridding

};



int main()
{

	student yuthika;
	yuthika.introduce(); // method of the base class is overridden by the subclass method which has same return type and arguments
	// base class method is hidden in the subclass

	yuthika.person::introduce(); // this is how if we want to access the overridden method in the
	std::cout << "Hello, World!" << std::endl;
	return 0;
}