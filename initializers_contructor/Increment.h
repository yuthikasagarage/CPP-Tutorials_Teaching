//
// Created by yuthika on 2020-04-26.
//

  #ifndef INCREMENT_H
  #define INCREMENT_H
   class Increment
  {
  public:
     Increment( int c = 0, int i = 1 ); // default constructor

     // function addIncrement definition
      void addIncrement()
      {
         count += increment;

      } // end function addIncrement

      void print() const; // prints count and increment

   private:

    int count;

    const int increment;   // const data member , when const data member is there an initializer must in the constructor as initializer list
   }; // end class Increment
   #endif