#include <iostream>
/*
 *
 * SHORT HAND OPERATORS, OVERLOADING
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

	void youtmark(){
		cout << "your mark is " <<xmark << endl;
	}

	void operator+=(int bonus){
			xmark = xmark + bonus;

	}

	friend void operator-=(marks &currentobj, int readmark);

};
void operator-=(marks& currentobj, int readmark);
void operator-=(marks& currentobj, int readmark)
{
	currentobj.xmark = currentobj.xmark -readmark;
}

int main()
{
	marks m1(25);
	marks m2(25);

	m1 += 20;

	m1.youtmark();

	m1 -=20;
	m1.youtmark();


	std::cout << "Hello, World!" << std::endl;
	return 0;
}