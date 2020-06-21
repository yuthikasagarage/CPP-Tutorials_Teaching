#include <iostream>
///OPERATOR OVERLOADING
//MAKING THE BASIC OPERATORS AVAILABLE IN C++ TO WORK WITH OUT CUSTOM BUILT OBJECTS
//WE CAN MAKE USE OF THEM WITH OUR CUSTOM TYPES, WHICH MEANS OUT OBJECTS THAT WE CREATE CUSTOM CLASSES

/*
 * IN C++ WE CREATE OPERATOR FUNCTIONS TO OVERLOAD
 * IT DEFINES THE OPERATIONS WHICH IT WILL PERFORM RELATIVE TO THE CLASSES
 * IT CAN BE EITHER MEMBERS OR NON MEMBERS.
 * OPERATOR FUNCTIONS IF IT'S A NON MEMBER THEN THAT OPERATOR FUNCTION IS A FRIEND FUNCTION OF THAT CLASS
 *
 */


using namespace std;



class marks{
private:
	int intmark;
	int extmark;

public:

	marks(){
		intmark = 0;
		extmark =0;
	}

	marks(int im, int em){
		intmark = im;
		extmark =em;
	}

	void display(){
		cout<<"int mark  " << intmark <<endl<< "ex mark  "<<extmark<<endl;

	}
	/*
	 * Operator overloading
	 */


	marks operator+(marks m){

		marks temp;//making a temporary object inside
		temp.intmark = intmark + m.intmark;
		temp.extmark = extmark + m.extmark;

		return temp;
	}

	marks operator-(marks m);//declaration

};
//definition outside the class
marks marks::operator-(marks m){

	marks temp;//making a temporary object inside
		temp.intmark = intmark - m.intmark;
		temp.extmark = extmark - m.extmark;
		return temp;
}




/*
 * the first object will call the operator function and the current object will be passed as the first parameter/argument.
 * here in first once m1 will call the operator function
 */

int main()
{

	marks m1(10,20);
	marks m2(30,40);

	marks m3 = m1 + m2;
	m3.display();


	marks m4 = m2 - m1;
	m4.display();

	std::cout << "Hello, World!" << std::endl;
	return 0;
}