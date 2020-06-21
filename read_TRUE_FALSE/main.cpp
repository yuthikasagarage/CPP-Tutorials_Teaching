#include <iostream>


using namespace std;
int main() {


  bool bval;
  cin.setf(ios::boolalpha); // now input stream is able to use true and false
  cout.setf(ios::boolalpha);
  cout.fill('*');
  cout.width(10); // this can be applied to all kinds of types
  cout.precision(5);
  cout.setf(ios::left); // left justified cout
  cout<<1.25546546546 << endl; // only 4 floating points will be given
  cin >> bval;
  cout << bval;

  return 0;
}