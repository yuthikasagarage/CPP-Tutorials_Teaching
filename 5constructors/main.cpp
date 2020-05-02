#include <iostream>

using namespace std;
/*
 *
 *
 * constructor is nothing more than a special function which has the same name of the class and no return type
 * it is automatically called
 */
class human{
private:
	string name;
	int age;

public:

	human(){

		cout<<"constructor is called whe you create an object" << endl;
		name = "haha";
		age = 12;
		display();		//here what ever the statements we write in here will be executed
													//when we create an object of this type human
													// we can define the constructor inside the class or using the :: out side the class
	}
	void display(){
		cout<<age<<name<<endl;
	}


};

class animal{
public:

	animal();





};

//

animal::animal() {

	cout<<"defined the constructor animal() outside the class"<<endl;


}



int main()
{
	animal lion;
	human yuthika; // here the constructor called and couts the value automatically we didn't have to use the display function outside
					// or initialize the name and age
					// if we don't make a constructor in a class then we will have a default constructor with nothing in it.


	std::cout << "Hello, World!" << std::endl;
	return 0;
}