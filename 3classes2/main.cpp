#include <iostream>

using namespace std;

/*
 * WE can declare the functions inside the class without fully defining it
 */
class human{

public:
	string name;
	void introduce(string name); // this is declaring it as it sounds

	void say_your_name_loud(){
		cout<<"ohh fucks "<< name <<endl; // this is defining as it sounds too

	}
};

/*
 *  :: is a scope resolution operator, we need to type this
 *  you have to define all the functions in a class before making an object
 *  we can use the scope resolution operator to define the methods and astatic vatiables only
 */
void human::introduce(string name_)
{
	cout << "defined it outside the class"<< name << endl;
}

int main()
{

	human* human1 = new human(); //did it like the pro, hahaha dynamic memory allocation

	human1->name = "yuthika";
	human1->introduce(human1->name);
	human1->say_your_name_loud();



	std::cout << "Hello, World!" << std::endl;
	return 0;
}