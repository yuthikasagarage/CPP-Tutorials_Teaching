#include <iostream>

using namespace std;

class human{

private:
	string name;
	int age;

public:

	human(){          // default constructor
		cout<<"default constructor called"<<endl;
		age = 0;
		name = "noname";

	}

	human(string iname, int iage ){          // manual overloading constructor
		cout<<"overloaded constructor called"<<endl;

		age = iage;
		name = iname;

	}
	void display(){

		cout<< name<< endl<<age<<endl;


	}




};


int main()


{
	human yuthika("yuthika",24);
	yuthika.display();

	return 0;
}