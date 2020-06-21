

// objects of a class can be also declared const
//when they are treated as constants, compiler will not change anything in that object
// so we have to provide const member functions


  // Attempting to access a const object with non-const member functions.
  #include "time.h" // include Time class definition
  int main()
  {
      Time wakeUp( 6, 45, 0 ); // non-constant object

     const Time noon( 12, 0, 0 ); // constant object

                             // OBJECT      MEMBER FUNCTION
      wakeUp.setHour( 18 );  // non-const   non-const


//  noon.setHour( 12 );    // const       non-const // we cannot call non const member functions from constant objects

    wakeUp.getHour();      // non-const   const // any member functions can be called by normal objects( non consts)

    noon.getMinute();      // const       const

    noon.printUniversal(); // const       const
//   	noon.printStandard();  // const       non-const  // we cannot call non const member functions from constant objects

// in member function declarations and definition we have to specifically say const in member functions


/*
 * when we know we are not modifying data members of the object inside a member function it is good programming practice to make that
 * member functions as const
 */











     return 0;
   } // end main
