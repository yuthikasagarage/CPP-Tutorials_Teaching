#include <iostream>
using namespace std;

class father {
protected:
	int heiught;

public:

	father(int h){
		cout << "contructor of  father i s called "<< endl;
		heiught = h;

	}

};

class mother {
protected:

	string skin;
public:

	mother(string iskin){
		cout << "contructor of  mother i s called "<< endl;
		skin = iskin;

	}

};
class child : public father, mother {

public:
	child(int x, string iskin) : father(x), mother(iskin){ // passsing the value to the base class constructor
		cout << "child class constructor is called" << endl;
	}


	void display(){
		cout << "height is " << heiught << endl;
		cout << "skin is " << skin << endl;

	}

};


int main()
{

	child yuthika(24,"lala");
	yuthika.display();
	std::cout << "Hello, World!" << std::endl;
	return 0;
}