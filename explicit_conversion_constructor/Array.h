   // Fig. 11.17: Array.h
  // Array class for storing arrays of integers.
 #ifndef ARRAY_H
   #define ARRAY_H
   #include <iostream>

  using std::ostream;
   using std::istream;
   class Array
   {
      friend ostream &operator<<( ostream &, const Array & );
      friend istream &operator>>( istream &, Array & );
   public:
      explicit Array( int = 10 ); // we use explicit here

      Array( const Array & ); // copy constructor

      ~Array(); // destructor
    int getSize() const; // return size

      const Array &operator=( const Array & Right); // assignment operator
      bool operator==( const Array & ) const; // equality operator

      // inequality operator; returns opposite of == operator
      bool operator!=( const Array &right ) const
      {
         return ! ( *this == right ); // invokes Array::operator==
      } // end function operator!=

      // subscript operator for non-const objects returns lvalue
      int &operator[]( int );
      // subscript operator for const objects returns rvalue
      const int &operator[]( int ) const;
   private:
     int size; // pointer-based array size
      int *ptr; // pointer to first element of pointer-based array
   }; // end class Array

 #endif

