#include <iostream>
using namespace std;
// PURE VIRTUAL

// WHEN YOU WANT TO ENSURE THAT THE ALL THE SUBCLASSES HAS TO OVERRIDE A METHOD IN THE BASE CLASS ACCORDINGL TO
// THE USER CASE, THEN PURE VIRTUAL FUNCTIONS WILL BE USED

/*
 * WHEN A PURE VIRTUAL FUNCTION IS INSIDE A CLASS, IT WILL BECOME AN ABSTRACT CLASS,
 * AND WE WILL BE NOT BE ABLE TO MAKE AN OBJECT FROM AN ABSTRACT CLASS
 */
class person{

public:

	virtual void introduce() = 0; // every subclass should override this function, can be any parameter, pure virtual
	//every subclass has to override this method if not it will give an error


};

void person::introduce() {
	cout << "hi person"<< endl;
}


class student : public person{
public:
	void introduce(){
		person::introduce();

		cout<< "hahha" << endl;
	}

};










int main()
{

	// person yuthika; cannot do this because person is a abstract class since it contains a pure virtual member function
	student hasara;
	hasara.introduce();


	std::cout << "Hello, World!" << std::endl;
	return 0;
}