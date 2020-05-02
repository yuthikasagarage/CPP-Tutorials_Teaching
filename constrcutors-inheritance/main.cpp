#include <iostream>
using namespace std;




class person{

public:
	person(){
		cout << "constructor of the person class called" << endl;
	}

	~person(){
		cout << "destructor of the person class called" << endl;
	}


};



class student : public person{

public:
	student(){
		cout << "constructor of the student class called" << endl;
	}

	~student(){
		cout << "destructor of the student class called" << endl;
	}


};






// constructor of the base class is called first
// and destructor of the subclass called first


int main()
{
	student yuthika;

	std::cout << "Hello, World!" << std::endl;
	return 0;
}