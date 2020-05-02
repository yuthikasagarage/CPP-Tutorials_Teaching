#include <iostream>
using namespace std;

class person{

public:

	void introduce(){

		cout << "hey hey person"<<endl;
	}





};


class student : public person{
public:
	void introduce(){

		cout << "hey hey studdent"<<endl;
	}


};


void who(person p){ // if we use a base class type parameter  then we can use subclass also
	p.introduce();	//pass by copy
}

void whso(person *p){ // if we use a base class type parameter  then we can use subclass also
	p->introduce();		// pass by pointer
}

void whaso(person &p){ // if we use a base class type parameter  then we can use subclass also
	p.introduce();		// pass by reference, same yuthika object will be used not a copy
}

int main()
{
	student yuthika;
	yuthika.introduce();
	who(yuthika); // we can use
	whso(&yuthika);
	whaso(yuthika);
	std::cout << "Hello, World!" << std::endl;
	return 0;
}