#include <iostream>
/*
 *
 *
 *
 *
 *
 * overloading unary operators prefix form
 * 	+=
 * 	X += 10; ------> X = X+10;
 *
 *	X -= 10;
 *	X = X-10;
 */


using namespace std;


class marks{

private:
	int xmark;
public:
	marks(){
		xmark = 0;
	}

	marks(int m ){
		xmark = m;
	}

	void yourmark(){
		cout << "your mark is " <<xmark << endl;
	}

//	void operator++(){
//		xmark = xmark +1;// used as prefix
//
//	}	/

/* we can do this or we can do
 * this
 * */
		marks operator++(){
		xmark = xmark +1;// used as prefix
		return *this; //this contains the current object *this will give the value
	}

	friend void operator--(marks &currentobj);

};
void operator--(marks& currentobj );
void operator--(marks& currentobj)
{
	currentobj.xmark = currentobj.xmark -1;
}

int main()
{
	marks m1(25);
	marks m2(25);

	--m1 ; //becomes 25

	m1.yourmark();

	++m1.operator++(); // since we are getting the reference ++ goes to 25 because of the this value


	std::cout << "Hello, World!" << std::endl;
	return 0;
}