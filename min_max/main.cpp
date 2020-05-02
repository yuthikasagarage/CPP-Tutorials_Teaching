
   // Fig. 20.38: fig20_38.cpp
   // Standard Library algorithms min and max.
  #include <iostream>
  using std::cout;
   using std::endl;

  #include <algorithm>
  int main()
   {
      cout << "The minimum of 12 and 7 is: " << std::min( 12, 7 );
      cout << "\nThe maximum of 12 and 7 is: " << std::max( 12, 7 );
      cout << "\nThe minimum of 'G' and 'Z' is: " << std::min( 'G', 'Z' );
      cout << "\nThe maximum of 'G' and 'Z' is: " << std::max( 'G', 'Z' );
     cout << endl;
     return 0;
   } // end main
