#include <iostream>
using namespace std;

class marks{
public:
	int xmark;


	marks(int m){
		xmark = m;
	}

	void display(){

		cout<<"i got "<< xmark <<endl;
	}

	marks operator()(int x){ // should be a non static member of the class, we can't use a friend function
		xmark =x;
		return *this; //returns the object
	}


};


int main()
{
	marks yuthika(85);// this is constructor call, when we create the object constructor is called
	yuthika.display();
	yuthika(50); // operator function is called
	yuthika.display();


	std::cout << "Hello, World!" << std::endl;
	return 0;
}