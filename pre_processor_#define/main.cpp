#include <iostream>

// a macro is a fragment of code which is given a name
// there are object type macros and function type macro
#define COUNTRY "SriLanka" // this is object type macro, macro name is the COUNTRY

/*
 * function macros
 */


#define ABS(number, num) ((number) < 0 ? -(number) : number) // function like macro

using namespace std;

int main() {

#if 0

#elif 1

  cout << "hahah " << endl;

#else
#endif

#undef COUNTRY

#ifdef COUNTRY



#else

#define COUNTRY "Sri Lankasasa"

#endif






  cout << COUNTRY << endl; //

  cout << ABS(-25, 5) << endl;

  std::cout << "Hello, World!" << std::endl;
  return 0;
}