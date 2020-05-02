#include <iostream>
#include <exception>

using namespace std;

void test() throw(int, const char*, runtime_error, char)
{

	throw "c"; // ogh so '' is a char type and ""  is const char* type
	/*
	 * it can be throw 'c'
	 *           throw 20
	 *           throw runtime_error(" what the heck)
	 *           or anytype you want but in function you have to specify the  types
	 *           and also in the specific on ein the catch statement
	 */


}

int main()
{
	try {
		test();

	}
//	catch (...) { // either we can do this or we can be specific t see what's going on
//
//		cout << "exception" << endl;
//
//	};

	catch (int x) {
		cout << "integer type " << x << endl;
	}
	catch (const char* c) {
		cout << "const  char type " << *c << endl;

	}
	catch (char x) {
		cout << " char type " << x << endl;

	}
	catch (runtime_error &x) { // runtime error is a class from exceptions header file

		runtime_error *y = &x;
		cout << "runtime  type " << y->what() << endl;

	}

	std::cout << "Hello, World!" << std::endl;
	return 0;
}