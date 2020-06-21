#include <iostream>
void display();  // declaration
using namespace std;
// USING STATIC inside a function
static int x;
// this variable is scope is file level
int main()
{
  display();
  display();
  display();
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
/*
 * When used within a function, it sets the duration of the item.
 * Again, the duration is the same as the program and the item continues
 * to exist between invocations of that function.
 *

It does not affect the visibility of that item
 since it's visible only within the function.
 An example is a random number generator that
 needs to keep its seed value between invocations
 but doesn't want that value visible to other functions.


 */

void display()
{
  static int counter = 0;  // this is a static variable since it will be pointed to a heap address
  // it calls only one time, when calling in the 2nd, 3rd time it will point to the heap address
  cout << "display function called" << ++counter << endl;
}
/*
 * When used at file level (outside of a function),
 * it sets the visibility of the item it's applied to.
 * Static items are not visible outside of their
 * compilation unit (e.g., to the linker).
 * Their duration is the same as the duration of the program.

These file-level items (functions and data) should be static
 unless there's a specific need to access them from outside
 (and there's almost never a need to give direct access to data since
 that breaks the central tenet of encapsulation).

If (as your comment to the question indicates) this is
 the only use of static you're concerned with then, no, there is no difference between C and C++.
 */