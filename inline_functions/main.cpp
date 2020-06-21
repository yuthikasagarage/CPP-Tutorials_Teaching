#include <iostream>
using namespace std;

inline double cube(const double side){ // compiler optimization

  return side*side*side;

}

int main() {




  cout << cube(25) << endl;


  std::cout << "Hello, World!" << std::endl;
  return 0;
}