

// Fig. 11.16: Fig11_16.cpp
// Driver for simple class Array.
#include <iostream>
using std::cout;
using std::endl;

#include "Array.h"

void outputArray( const Array & ); // prototype

int main()
{
  Array integers1( 7 ); // 7-element array

  outputArray( integers1 ); // output Array integers1

 // outputArray( 3 ); // convert 3 to an Array and output Array's contents // cannot do this when using explicit

  outputArray(Array(3)) ; // now explicit conversation happens
	// make a temporary array object and pass it to the function
	// if there's only one argument in the constructor check whether it's going to act as a conversion constructor as well as a default constructor and use explicit keyword


  return 0;
}  // end main
// print Array contents
void outputArray( const Array &arrayToOutput )
{
  cout << "The Array received has " << arrayToOutput.getSize()
	   << " elements. The contents are:\n" << arrayToOutput << endl;
} // end outputArray