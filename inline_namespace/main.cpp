#include <iostream>

using namespace std;

namespace appversion {

namespace v1 {

void display() {

  cout << "1" << endl;
}
}

namespace v2 {
void display() {
  cout << "2" << endl;
}

}

inline namespace v3 {

void display() {
  cout << "3" << endl;

}
}

}

int main() {

  appversion::display(); // this gives the version 3 display function because of inline
	appversion::v2::display();


  std::cout << "Hello, World!" << std::endl;
  return 0;
}