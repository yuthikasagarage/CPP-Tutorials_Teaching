#include <iostream>
using namespace std;

class marks{
	int xmarks;// if don't specify it's private

public:
	marks(int m){
	xmarks = m;
	}

	void display(){

		cout << xmarks<< endl;
	}

	// -> this is class member access operator

	marks* operator->(){
		return this;
	}


};



int main()
{	marks yuthika(22
);
	yuthika.display();
	yuthika->display(); // it becomes like a . operator so yuthika-> part gets the current objeect address


	std::cout << "Hello, World!" << std::endl;
	return 0;
}