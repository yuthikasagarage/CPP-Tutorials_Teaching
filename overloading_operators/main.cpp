#include <iostream>
using namespace std;
/*
 * we can't change the precedence of operators when overloading
 * we can't alter the operands of the operators like unary is only one , like ++
 *
 * we can't overload :: , . operator , ? operator, .* operators
 *
 * except for = operator derived class is going to overload the operators. derived class is going to be inherited
 */

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




};



int main()
{	marks yuthika(22
	);
	yuthika.display();


	std::cout << "Hello, World!" << std::endl;
	return 0;
}