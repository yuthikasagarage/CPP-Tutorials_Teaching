#include <iostream>

//POLYMORPHISM MEANS HAVING MANY FORMS

//TYPICALLY OCCURS WHEN THERE ARE HIERARCHICAL CLASSES AND THEY ARE RELATED BY INHERITANCE
// C++ POLYMORPHISM MEANS THAT A CALL TO A MEMBER FUNCTION WILL CAUSE DIFFERENT FUNCTION'S TO BE EXECUTED DEPENDING ON THE
// TYPE OF THE OBJECT THAT INVOKES THE FUNCTION

// IN ORDER TO MAKE THE WHO FUNCTION DOWN IN THE CODE HAS DIFFERENT OUTPUTS GIVEN THE ARGUMENT PASSED
// WE NEED TO USE "VIRTUAL" KEYWORD

// IF WE SAY VIRTUAL IN THE BASE CLASS TO FUNCTION THAT INDICATES TO THE COMPILER THAT WE DON'T WANT
// STATIC LINKAGE TO THE FUNCTION, IF THAT METHOD IS OVER RIDEN IN THE SUBCLASSES



using namespace std;


class person {

public:
	virtual void introduce()
	{
		cout << "from person" << endl;
	}

};

class student : public person{

public:
	void introduce()
	{
		cout << "from student" << endl;
	}

};
class farmer : public person{

public:
	void introduce()
	{
		cout << "from farmer" << endl;
	}

};

void who(person &p){
	p.introduce();

}


int main()

{
	farmer yuthika;
	student hasara;

	who(yuthika);// when use virtual this will give the function in the farmer class
	who(hasara); // this will called as the class student \
	// if any subclass has not overriden the method from the base class, then method from the base class will be called

	std::cout << "Hello, World!" << std::endl;
	return 0;
}