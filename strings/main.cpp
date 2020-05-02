#include <iostream>

using namespace std;

int main() {
  string data("yuthika"); //now data is a object of the string class more like
  string hasara = "hasara"; // same thing different constructor
  // has all the same member functions to play with
  data.append(" rocks");

  data.insert(0, "god ");
  cout << data << endl;

  cout << data.substr(4) << endl;
  data.erase(0, 8);

  cout << data << endl;

  std::cout << "Hello, World!" << std::endl;
  return 0;
  /*
   *
   *
   * have a look at the string class
   */
}