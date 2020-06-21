#include <iostream>

using namespace std;

template<class T>
void display(T x);

template<class T, class T2>
void display(T x, T2 y);

int main() {

  display(25);
  display(25, 56);

  std::cout << "Hello, World!" << std::endl;
  return 0;
}

template<class T>
void display(T x) {
  cout << x << endl;
}

template<class T, class T2>
void display(T x, T2 y) { // we can overload this with a same name and different parameters
  cout << y << "          " << x << endl;
}