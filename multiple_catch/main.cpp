#include <iostream>
#include <exception>
using namespace std;


int main()
{
	try {
		//throw "some exception"; // this throws a const char so catching will be done in first catch statement
		throw 20; // if we type 20 it will go to the int catch block.
		// c++ will go to the matching catch block

//	}catch(const char *error){
//
//		cout<<error<<endl;
//
//	}catch(int error){
//
//	cout << error<<endl; // either you can do this or this this below
// we can use this with above catch blocks to handle anything that we really don't know
	}catch (...){

		cout <<"catching" << endl;
	};
// in c++ we can catch all the exceptions like above

	std::cout << "Hello, World!" << std::endl;
	return 0;
}