#include <iostream>
#include <iomanip>
using namespace std;

ostream &rightarrow(ostream &output) { // our own manipulator
  output << "---->" << endl;
  return output;
}
istream &getName(istream &input) { // now we can use these in input and output streams
  cout << "enter your name" << endl;
  return input;
}

int main() {

  cout << "hi" << endl; // endl is a manipulator
  cout << hex << 84 << endl; // hex is a manipulator
  cout << setw(10) << setfill('@') << "hi" << endl; // the manipulator scope is limited to this line if wre use it like this
  cout << "hi" << endl;

  string name;
  cin >> getName >> name;
  cout << rightarrow << name << endl;

  return 0;
}