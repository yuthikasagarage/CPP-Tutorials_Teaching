#include <iostream>
#include <exception>
using namespace std;

int main()
{
	try {

		try {
			throw " a exceptions in inner block"; // we can have nested catch blocks

		}
		catch (const char* x) {
			cout << "unexpected expetion  " << x << endl;
			// we canm throw this into the outer block
			throw; // when you use throw we can rethrow the exception to the outer block
		}

	}
	catch (const char* e) {
		cout << "unexpected expetion in outer rethrowing " << endl;
	}
	catch (...) {
		cout << "unexpected expetion in " << endl;
	};

	std::cout << "Hello, World!" << std::endl;
	return 0;
}