#include <iostream>
using namespace std;

void printArray(const int *array);
void printArrayMUlti(const int array[][3]);

int main() {

  int array1[2][3] = {{1, 2}, {3, 4, 5}};
  int array2[2][3] = {1, 2, 3, 4, 5};
  int array3[2][3] = {{1, 2}, {3, 4}};

  printArray(reinterpret_cast<const int *>(array1));
  printArrayMUlti(array2);
  printArrayMUlti(array3);

  std::cout << "Hello, World!" << std::endl;
  return 0;
}

void printArray(const int *array) {

  cout << *array << endl; // only gets the base pointer

}
void printArrayMUlti(const int array[][3]) {

  for (int i = 0; i < 2; i++)
	{

	for (int j = 0; j < 3; j++)
	  {

	  cout << array[i][j];

	  }
	cout << endl;
	}

}

