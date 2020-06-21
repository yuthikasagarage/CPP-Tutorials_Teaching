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
		/*
		 * keyword operator+(parameters we want to pass which is a object of the class)
		 * when this is a member function, only one parameter is need to be passed since,
		 * the first parameter will be the object of the class,
		 * this can return anything ,first intmark so here m1 will be passed as the current object,
		 * m is the value we're going to pass.
		 */
		marks temp;//making a temporary object inside
		temp.intmark = intmark + m.intmark;
		temp.extmark = extmark + m.extmark;

		return temp;
	}

	//if we're doing operator overload outside the class then we have to pass 2 parameters

};


int main()
{

	marks m1(10,20);
	marks m2(30,40);

	marks m3 = m1 + m2;
	m3.display();

	std::cout << "Hello, World!" << std::endl;
	return 0;
}