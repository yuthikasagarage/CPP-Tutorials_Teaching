#include <iostream>
#include <exception>
using namespace std;


/*
 *
 * WE HAVE EXCEPTION BASE CLASS
 *
 * WE HAVE BAD ALLOC
 * 	BAD CAST
 * 	LOGIC FAILUE
 * 	BAD TYPEID
 * 	BAD_EXCEPTION
 * 	STD_RUNTIME ERROR
 **
 *
 *
 *
 *
 * THEN FROM LOGIC FAILURE EXCEPTION CLASS WE HAVE
 *
 * DAMIAN_ERROR
 * INVALID-ARGUMENT
 * LENGTH_ERROR
 *STD:OUT OF RANGE DERIVED CLASSES
 *
 *
 *FROM RUNTIME ERROR EXCEPTION CLASS WE HAVE
 *
 * OVERFLOW_ERROR
 * STD:RANGE ERROR
 * UNDERFLOW ERROR DERIVED CLASS
 *
 * *
 */


int main()
{
	int a = 10, b = 0, c;

	try {

		if (b==0) {
			throw runtime_error("divide by zero"); //  we're throwing the object from runtime class
			c = a/b;
		}
	}
		catch(runtime_error &error){ // this error is a object of the runtime_error class
		 cout<<"exception error"<<endl;
		}



	cout << "Hello, World!" <<endl;
	return 0;
}