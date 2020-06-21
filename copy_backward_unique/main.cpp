// Fig. 20.34: fig20_34.cpp
   // Standard Library algorithms inplace_merge,
   // reverse_copy and unique_copy.
   #include <iostream>
   using std::cout;
   using std::endl;

   #include <algorithm> // algorithm definitions
   #include <vector> // vector class-template definition
   #include <iterator> // back_inserter definition
   int main()
   {
     const int SIZE = 10;
      int a1[ SIZE ] = { 1, 3, 5, 7, 9, 1, 3, 5, 7, 9 };
     std::vector< int > v1( a1, a1 + SIZE ); // copy of a
     std::ostream_iterator< int > output( cout, " " );
      cout << "Vector v1 contains: ";
     std::copy( v1.begin(), v1.end(), output );
      // merge first half of v1 with second half of v1 such that
      // v1 contains sorted set of elements after merge
      std::inplace_merge( v1.begin(), v1.begin() + 5, v1.end() );

      cout << "\nAfter inplace_merge, v1 contains: ";
      std::copy( v1.begin(), v1.end(), output );

      std::vector< int > results1;

      // copy only unique elements of v1 into results1
      std::unique_copy(
         v1.begin(), v1.end(), std::back_inserter( results1 ) );
     cout << "\nAfter unique_copy results1 contains: ";
      std::copy( results1.begin(), results1.end(), output );

     std::vector< int > results2;
    // copy elements of v1 into results2 in reverse order
      std::reverse_copy(
        v1.begin(), v1.end(), std::back_inserter( results2 ) );
     cout << "\nAfter reverse_copy, results2 contains: ";
     std::copy( results2.begin(), results2.end(), output );
      cout << endl;
      return 0;
   } // end main