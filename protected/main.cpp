#include <iostream>
using namespace std;
/*
 * ACCESS SPECIFIER PROTECTED
 * THESE MEMBER FUNCTIONS AND MEMBERS ARE ACCESSIBLE IN THE SUB CLASSES but cannot access these from outside functions like in main
*/
class person{

protected:
	string name;


public:
	void set_name(string iname){

		name = iname;
		cout<< name << endl;
	}

};


/*
 * making a subclass
 */

class student : public person{
	// this student can access non private member from the person

};
// access control and the inheritance , the subclass can access all the non private members of the base class
// when we use inheritance, the subclass is going to have access to all the non private methods
// Except constructors, destructors, overloaded operators and friend functions




int main()
{
	person yuthika;
	yuthika.set_name("yuthika");


	student yuthik;
	yuthik.set_name("ahaha"); // availabe to the subclass protected members

	std::cout << "Hello, World!" << std::endl;
	return 0;
}