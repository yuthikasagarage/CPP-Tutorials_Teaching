//ig. 10.1: Time.h
// Time class definition with const member functions.
// Member functions defined in Time.cpp.
#ifndef TIME_H
#define TIME_H
class Time {
 public:
  Time(int = 0, int = 0, int = 0); // default constructor


  // set functions
  Time & setTime(int, int, int); // set time
  Time & setHour(int); // set hour
  Time & setMinute(int); // set minute
  Time & setSecond(int); // set second


  // get functions (normally declared const)
  int getHour() const; // return hour
  int getMinute() const; // return minute
  int getSecond() const; // return second

  // print functions (normally declared const)
  void printUniversal() const; // print universal time
  void printStandard(); // print standard time (should be const)

  int & testfunc();

  static int getcount();



  // on constant objects only constant member functions can be called
 private:

  int hour; // 0 - 23 (24-hour clock format)
  int minute; // 0 - 59
  int second; // 0 - 59

  static int count;

}; // end class Time
#endif