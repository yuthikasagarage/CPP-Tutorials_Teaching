#include <iostream>
using namespace std;

class person{
public:
	virtual void introduce(){
		cout<< "from person "<< endl;
	}

};


class student : public  person{
public:
	void introduce(){
		cout<< "from student "<< endl;
	}

};

class gstudent : public student{ // base class of the gstudent is student
public:
	void introduce(){		// virtual nature is also passed for this introduce function
	cout <<"from ggg" << endl;
	}


};



class gastudent : public student{ // base class of the gstudent is student

	// because of the absence of the overridden method method in the base class of this class is invoked

};


void who(person &p){
	p.introduce();
}

int main()

{

	person yuthika;
	student miyuru;
	gstudent hasara;
	gastudent punsara;

	who(yuthika);
	who(miyuru);
	who(hasara);
	who(punsara);

	std::cout << "Hello, World!" << std::endl;
	return 0;
}