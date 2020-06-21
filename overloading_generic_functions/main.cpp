#include <iostream>

template<class T> void display(T x, T y);
void display(int x, int y);
template<> void display<float>(float x, float y);
using namespace std;

int main() {

  display(25, 54);
  display(25.2, 454.2);
  display("dasda","asda");

  display<float>(25.5,456.2);

  std::cout << "Hello, World!" << std::endl;
  return 0;
}

template<class T> void display(T x, T y) {

  cout << x << " generic function " << endl;

}

void display(int x, int y) { // explicit overloading of a generic function

  cout << x << " normal function" << endl;

}

template<> void display<float>(float x, float y) { // we can overload the generic functions like this too

  cout << x << " generic function overloaded" << endl;

}
