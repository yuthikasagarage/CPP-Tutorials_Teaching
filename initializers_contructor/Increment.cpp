//
// Created by yuthika on 2020-04-26.
//

   // Fig. 10.5: Increment.cpp
  // Member-function definitions for class Increment demonstrate using a
  // member initializer to initialize a constant of a built-in data type.
  #include <iostream>
  using std::cout;
  using std::endl;
  #include "Increment.h" // include definition of class Increment
  // constructor
  Increment::Increment( int c, int i ) : increment( i ) // required initializer for const member
   {
	 count = 0; // since this is not a const member it can be initialized here
//	 increment = 0; this is not possible


      // empty body
   } // end constructor Increment

   // print count and increment values
  void Increment::print() const
   {
      cout << "count = " << count << ", increment = " << increment << endl;
   } // end function print