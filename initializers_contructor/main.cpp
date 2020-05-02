
   // Program to test class Increment.
   #include <iostream>
   using std::cout;

   #include "Increment.h" // include definition of class Increment

   int main()
   {
      Increment value( 10, 5 );

     cout << "Before incrementing: ";
      value.print();

      for ( int j = 1; j <= 3; j++ )
     {
         value.addIncrement();
        cout << "After increment " << j << ": ";
        value.print();
      } // end for

      return 0;
   } // end main