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
	void display(){
		cout<<name<<endl;
		cout<<"came here"<< endl;
	}
	void set_student_name(string iname){
		set_name(iname);
	}
	// we only can access the members of the base class here , cannot do it outside from an object because we defined private here

};

class graduate : public student{
	// now here we can't access the name member
public:
	void set_gstudent_name(string iiname){
		set_student_name(iiname); // these methods can be accesses since public to the above class but we cannot access the
		// inherited name member from the person class becasue above inheritance is private
		//from a valu we set from here it can pass that value to the public functinos and change the name member inside the function
		// in above class
		display();// but cananot acesss name from here we have to go around to do that
	}

};

int main()
{
	graduate yuthika;
	yuthika.set_gstudent_name("yuthika");
	yuthika.display();

	std::cout << "Hello, World!" << std::endl;
	return 0;
}
