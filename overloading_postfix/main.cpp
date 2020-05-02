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
	marks operator++(int){
		marks duplicate(*this);//now copy constructor is called
		xmark = xmark +1;//
		return duplicate; //this contains the current object *this will give the value
		//first return duplicate then next line increment, in pre fix you just increment and give the value in one go
	}

	friend marks operator--(marks &currentobj, int);

};
marks operator--(marks& currentobj, int );
marks operator--(marks& currentobj,int)
{
	marks duplicate(currentobj);

	currentobj.xmark = currentobj.xmark -1;
	return duplicate;
}

int main()
{
	marks m1(25);
	marks m2(6);
	m1.yourmark();//25

	(m1++).yourmark() ; //since this returns the duplicate xmark =25

	m1.yourmark(); //becomes 26


	m2.yourmark();
	(m2--).yourmark();

	m2.yourmark();


	std::cout << "Hello, World!" << std::endl;
	return 0;
}