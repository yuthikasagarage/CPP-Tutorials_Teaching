#include <iostream>

using namespace std;

template<typename T>
void Array(const T *const array, int count) {
  for (int i = 0; i < count; i++)
	{
	cout << array[i] << "";
	}
  cout << endl;
}

int main() {

  int *x = new int[5];

  int xx[2] = {};

//Array(xx, 5);

  Array(x, 5);

  Array(xx, 2);

  std::cout << "Hello, World!" << std::endl;
  return 0;
}
