#include <iostream>
#include <string>

using namespace std;


class human_being{

#if 0
ACCESS SPECIFIERS are the ----------> public :, private
	when we say public: in this all the things we're writing here are avalabe to our program outside the class'
#endif

public:

	string name;

	void introduce(){

		cout<<"Hi my name is "<<name <<endl;
	}
	void display(){

		cout<<"hello i am a human being display"<< endl;

}
/*
 * class is the blueprint or the data type o
 * class just defines properties and actions, creating a object allows us to get the blue print and make a object
 */

};

class human{
public:
	string name;
	void introduce(){
		cout<<"hi "<<name<<endl;
	}

};


int main()
{
	/*
	 * OBJECT is just a variable of the class
	 * like int a , int is the data type
	 * when you make object like this it will be made in the stack not in heap
	 */


	human_being human1; //instantiate an object from the class
	human1.display();
	human_being human2;
	human2.name = "fucker";
	human2.introduce();
	/***************************************************/

	/*
	 * NEXT way to instantiate is by using new key word if you use new keyword the object will be
	 * stored in heap and it will be dynamic also the
	 *
	 * new keyword is going to return a memory address
	 *
	 */
	human* human3; // basically this is making a pointer of type human as human3
	human3 = new human(); // this is the declaration.

	human* human4 = new human(); //can write it like this too





	// new is giving the allocated memory address to the class object
	//dynamic memory allocation stays in the heap even when goes out of scope.

	human3->name = "yuthika";
	human3->introduce();

	human4->name = "mityut";
	human4->introduce();


	std::cout << "Hello, World!" << std::endl;
	return 0;
}