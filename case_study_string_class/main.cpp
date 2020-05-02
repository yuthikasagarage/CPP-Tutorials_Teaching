
#include <istream>

using namespace std;

#include "String.h"

int main() {

  String s1("happy");
  String s2(" birthday");
  String s3;

  s3 = s1;
  cout << endl;

  s1 += s2;
  cout << endl;

  s1 += " to you"; // string concatenation // string conversion constructor
  cout << endl;

  cout << s1 << endl;

  cout << endl;

  cout << s1(0, 4) << endl;

  cout << endl;

  String *Sptr = new String(s1); // copy constructor dynamically


  cout << endl;

  cout << "pointer  ->" << *Sptr << endl;

  cout << endl;

  s1[0] = 'X';

}


