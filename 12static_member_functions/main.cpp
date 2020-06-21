#include <iostream>
using namespace std;


class human{
public:
	static int human_count;     // this variable will be shared among the objects no matter how many objects we make
	//we have to initialize the static members before creating an object
	//this is in a class scope a fucking big scope
	// there will be only one value for all the objects

	human(){
		human_count++;
	//	Count(); // we can call the static members in the constructor or if we're outside class
				// we have to use the :: to call the static members
	}

	void human_total(){
		cout<<"haha"<<endl;

	}


	static void Count(){   //when we create a static method this will be shared among the all objects
									// there will be only one address at the heap
									// and we can only use static variables inside the static member functions
		cout << "there are   "<<  human_count << "  people in the program" << endl;
	}

};


int human::human_count = 0; // we can do this too, initialising outside the class



int main()
{
	human yuthika;
	human hasara;
	human::Count(); // to call a static method we have to use the scope resolution operator
	yuthika.human_total(); // normal member functions are called this way but static members are in the class scope not the object scope

	return 0;
}