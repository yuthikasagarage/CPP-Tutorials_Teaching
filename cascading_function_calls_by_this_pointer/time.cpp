// Fig. 10.2: Time.cpp
// Time class member-function definitions.
#include <iostream>
using namespace std;

#include <iomanip>
using std::setfill;
using std::setw;
#include "time.h"

// include definition of class Time
// constructor function to initialize private data;
// calls member function setTime to set variables;
// default values are 0 (see class definition)
Time::Time( int hour, int minute, int second )
{
  setTime( hour, minute, second );
  count ++;
} // end Time constructor
// set hour, minute and second values
Time& Time::setTime( int hour, int minute, int second )
{
  setHour( hour );
  setMinute( minute );
  setSecond( second );


  return *this;
} // end function setTime
// set hour value
Time & Time::setHour( int h )
{
  hour = ( h >= 0 && h < 24 ) ? h : 0; // validate hour

  return *this;
} // end function setHour

// set minute value
Time& Time::setMinute( int m )
{
//	 (*this).minute = ( m >= 0 && m < 60 ) ? m : 0; // explicitly giving a value
  //or
  // this->minute = ( m >= 0 && m < 60 ) ? m : 0; it's the same thing


  /* this pointer is a pointer to the current object when you de-reference the pointer you get the object and
   * you can use te dot operator
   *
   * */

  minute = ( m >= 0 && m < 60 ) ? m : 0; // validate minute

  return *this;
} // end function setMinute


// set second value
Time& Time::setSecond( int s ) // TIme & -------> reference to a time object which is actually
{
  second = ( s >= 0 && s < 60 ) ? s : 0;  // validate second
  return *this; // enables cascading, returns the object itself, which means return this object by reference not by value
// THIS   means the returned value is an alias to whatever you returned from the function.
// return type is -======== reference to a time object === *this is a time object and we return that object tby reference so that it does not make a copy
// and work and interact within the same object memory

} // end function setSecond


int &Time::testfunc() { // return type is of type int&  which saying return something of type int by reference without copying
// reference is just an alias to the variable which lives in the same memory location that's why when passed it doesn't make a copy
  int lala;
  return lala; // this-> minute is a integer member variable what we do here is returning the the this->minute by reference
}       // do not do this garbage , always reference to an object of the class because when lala goes out of scope nothing is left
//Reference to stack memory associated with local variable 'lala' returned
// for static variables in local scope this is ok since the scope is there after exiting the function and also i think for member variables

// nothing good will happen in something like this//	 THIS IS TOTALLY WRONG !!!!!!!!!!!


int Time::count = 0; // cannot include the name it is declared in here
// this is how static members are called





// return hour value
int Time::getHour() const // get functions should be const
{
// here we cannot modify anything like hour = 7; is not allowed ,

  return hour;
} // end function getHour

// return minute value
int Time::getMinute() const
{
  return minute;
} // end function getMinute

// return second value
int Time::getSecond() const
{
  return second;
} // end function getSecond
// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
  cout << setfill( '0' ) << setw( 2 ) << hour << ":"
	   << setw( 2 ) << minute << ":" << setw( 2 ) << second;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() // note lack of const declaration
{
  cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
	   << ":" << setfill( '0' ) << setw( 2 ) << minute
	   << ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM" );
}
int Time::getcount() { // this is the static member function static part of the function is defined in .h file

  // inside this function we are only able to use static members

  cout << count  << endl;


  return count;
}

// end function printStandard
