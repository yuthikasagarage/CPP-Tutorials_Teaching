#include <iostream>

/*
 * stream is a buffer
 * text streams, binary streams
 * c++ stream classes
 *
 *
 * fstream
 * sstream
 *
 */


// SETTING THE FORMAT FLAGS

int main() {


  std::cout.setf(std::ios::showpos | std::ios::showpoint); // this is how the format flags are used, there are many format flags
 // std::cout.setf(std::ios::showpos, std::ios::showpoint); //we can use it like this too

  std::cout << 100.25 << std::endl;

  std::cout.unsetf(std::ios::showpos); //unseating the flags


  std::cout << 100.25 << std::endl;

  auto flags = std::ios::showpoint | std::ios::showpos;

  std::cout.flags(flags); // we can pass it like this tooo



  return 0;
}