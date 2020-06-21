#include <iostream>
using namespace std;

/*
 * [] () ->
 * these three operators can be overloaded,
 * to overload these it has to be non static member function and also they cannot be freinds
 * we cannot ue friend functions to overload these these operators
 *
 *
 *
 *
 */


class marks{
private:
	int subjects[3];

public:

	marks(int sub1, int sub2, int sub3){
		subjects[0] = sub1;
		subjects[1] = sub2;
		subjects[2] = sub3;
	}

	int operator[](int position){
		return subjects[position];

	}

};



int main()
{
	marks yuthika(93,90,91);
	std::cout << "Hello, World!" << std::endl;
	cout<<yuthika[0]<<endl; //this is what we're going to do


	return 0;
}