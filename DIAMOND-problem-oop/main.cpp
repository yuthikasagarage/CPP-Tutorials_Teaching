#include <iostream>

using namespace std;



class animal{
public:
	animal(){
		cout<<"animal contructor called" << endl;
	}

	int age;
	void walk(){
		cout << " animal walks "<<endl;
	}

};


class lion : public virtual animal{

public:
	lion(){
		cout<<"lion contructor called" << endl;
	}
};


class tiger : public virtual animal{

public:
	tiger(){
		cout<<"tiger contructor called" << endl;
	}
};


class liger : public lion, public tiger{
public:
	liger(){
		cout<<"liger contructor called" << endl;
	}

};






int main()
{
	liger yuthika; // constructor call hierarchy is different when using virtual in inheritance subclassing
	//yuthika.walk(); // now this will give ambiguity
				// request for member ‘walk’ is ambiguous
	//  yuthika.walk(); // now this will give ambiguity
	// if we put the virtual then it will solve the ambiugity
	/*
	 * class lion : public virtual animal{
				};
	 */
	yuthika.walk();

	std::cout << "Hello, World!" << std::endl;
	return 0;
}