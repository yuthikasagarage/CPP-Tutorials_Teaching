#include <iostream>

template<class T1, class T2>
void display(T1 x, T2 y);
using namespace std;

int main() {
  display("hahah", 24);

  return 0;
}

template<class T1, class T2>
void display(T1 x, T2 y) {

  cout << x << "  this is possible   " << y << endl;

}