#include <iostream>


using namespace std;

/*
 * INHERITANCE IS JUST SUB CLASSING / SUPER CLASSING AS SUCH, INHERITING FROM THE OTHER CLASS AS IT SOUND
 */


class person{

public:

	string name;
	int age;

	void set_name(string iname){
		name = iname;
	}
	void set_age(int iage){
		age =iage;
	}
	// this is the base class or super class
};



class student : public person{ // this is how inherits we have class called student and access specifiers should be also there
	// here we're inheriting from the class person

public:
	int id;

	void set_id(int iid){

		id = iid;
	}
	void introduce(){
		cout << "Hi i am " << name << " age "<< age << " . my student id is " << id<< endl;
	}
	// this allows to define a class using a another class, so this is a subclass of the person

};


int main()
{
	student yuthika;
	yuthika.set_age(24);
	yuthika.set_id(123);
	yuthika.set_name("yuthika");
	yuthika.introduce();


	std::cout << "Hello, World!" << std::endl;
	return 0;
}