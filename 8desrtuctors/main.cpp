#include <iostream>
using namespace std;
/*
 * DESTRUCTOR IS A SPECIAL MEMBER FUNCTION OF THE CLASS WHEN THE CLASS GO OUT OF SCOPE OR THE POINTER IS DELTED IF WE DYNAMICALLY
 * CREATE THE OBJECT
 */

class human{
public:

	human(){
		cout<<"constructor called"<< endl;
	}



	~human(){ //destructor cannot take any arguments or cannot return any values but can execute some code

		cout<< "destructor is called"<<endl;

	}

};



int main()
{
	for(int i = 0; i <1; i++){
		human yuthika;
	}
	// this gets destroyed because it goes out of scope


	human *yuthika = new human();
	//destructor is not called at this point
	delete yuthika;
	//now the destructor called




	return 0;
}