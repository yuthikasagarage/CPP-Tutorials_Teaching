#include <iostream>
using namespace std;



class human{
private:
	string *name;
	int *age;


public:
	human(){


	}
	human(int iage, string iname){

		name = new string; // memory allocated dynamically to store variables
		age = new int;		//

		*name = iname;
		*age = iage;
	}

	void display(){

		cout<<"Hi i am" << *name << "age is " << *age <<endl;

		}

		~human(){

		delete name;
		delete age;
		cout<< "destructor called"<<endl;


	}

};




int main()
{
	human* yuthika = new human(24,"yuthika"); //  creating a object in the heap
	yuthika->display();
	//here memory is no tdeallocated
	delete yuthika;

	return 0;
}