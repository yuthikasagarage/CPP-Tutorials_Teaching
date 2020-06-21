#include <iostream>

// defining classes inside the function
// when we define outside all the functions, we can use it in all the functions that we write in our program
// we did this all like this upto now
// when we define a class inside the function now , it has the scope of that function can't use it outside

using namespace std;
void studentlist();

void studentlist(){

	class student{

	public:
		string name;
		int age;
		void display(){
			cout<< age<< "     "<<name<< endl;
		}

	};
	student yuthika;
	yuthika.name = "yuthika";
	yuthika.age = 28;
	yuthika.display();
// THIS CLASS WILL BE ONLY AVAILABLE INSIDE THE FUNCTION CAN'T DO IT OUTSIDE WILL GET AN ERROR
//OUTSIDE THE SCOPE
}



int main()
{

	studentlist();
	std::cout << "Hello, World!" << std::endl;
	return 0;
}