#include <iostream>

#include <iostream>
using namespace std;

class person{// base class

protected:
	string name;
public:
	void set_name(string iname){
		name = iname;
	}
};


/*
 * making a subclass
 */

class student : private person{ // this is private inheritance, public and protected members of the base class is ogoing to act
	// as private members of the subclass, so name is now a private member of the student class
public:
	// if we want to make the access to the private member name here
	using person :: name; // now we can access the public
	// if we want to make a member function public then we can do it like this too we have to just
	// make a kind of a declaration in public scope of the class
	using person ::set_name;



	void display(){
		cout<<name<<endl;
		cout<<"came here"<< endl;
	}
	void set_student_name(string iname){
		set_name(iname);
	}
	// we only can access the members of the base class here , cannot do it outside from an object because we defined private here

};



int main()
{
	student yuthika;
	yuthika.name = ("haha");
	yuthika.display();
	yuthika.set_name("huta");
	yuthika.display();
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
