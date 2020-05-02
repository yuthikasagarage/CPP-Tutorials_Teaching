

// objects of a class can be also declared const
//when they are treated as constants, compiler will not change anything in that object
// so we have to provide const member functions


// Attempting to access a const object with non-const member functions.
#include "time.h"
#include <iostream>
// include Time class definition
using namespace std;
int main()
{

  Time t;

  // cascading the function calls
	// returning references to objects
  // these are starting from the left side and goes right

	t.setHour(1).setMinute(10).setSecond(0) ; // cascaded function calls by returning the (*this) ------> which is the object
	t.setTime(2,2,2).printStandard();
	cout << endl;

	Time r;
	Time rr;


	Time::getcount(); // this is a class level function not an instance level function



int xx = 10;

int &xy  =xx; // we onl;y can make an alias when there's a existing varibale

// int &x = 10 ;  this WRONG CUZ WE CAN'T MAKE AN ALIAS OF 10

 // SO HERE xx and xy is located at the same address, xy is just another name for xy






  return 0;
} // end main
