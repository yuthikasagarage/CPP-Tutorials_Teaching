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
	}

	void human_total(){
		cout << "there are   "<<human_count << "in the program" << endl;

	}

};


int human::human_count = 0; // we can do this too, initialising outside the class



int main()
{
	human yuthika;
	yuthika.human_total(); // now human_count is 1
	human hasara;
	hasara.human_total();// now human_count is 2

	std::cout << "Hello, World!" << std::endl;
	return 0;
}