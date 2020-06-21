#include <iostream>
using namespace std;

#include <iomanip>

void selection_sort(int *, const int, bool(*)(int, int)); // -------> this is a pointer to a function


// -------> (*) // this part is read as pointer to a function,
// which returns a bool value and takes two integer parameters

// when calling we just pass a name of the function or similar return type and arguments which has the pointer to the function
// pointer to a function that return a a boolean
void swap(int *const, int *const);
bool ascending(int, int);
bool descending(int, int);

int main() {

  const int arraySize = 10;

  int order;
  int counter;
  int a[arraySize] = {2, 5, 3, 4, 84, 5, 485, 5, 4, 5};

  cout << "enter 1 for ascending , 0 for descending" << endl;
  cin >> order;
  // output original order

  for (int i = 0; i < arraySize; i++)
	{

	cout << a[i];
	}
  cout << endl;

  if (order == 1)
	{
	selection_sort(a, arraySize, ascending);
	}

  if (order == 0)
	{
	selection_sort(a, arraySize, descending);
	}

  for (counter = 0; counter < arraySize; counter++)
	{
	cout << std::setw(4) << a[counter] <<" " ;

	}

  cout << endl;

  return 0;
}

void selection_sort(int *work, const int size, bool(*compare )(int, int)) { // here we need to pass the function which returns a bool and get 2 int arguments
  // so we are just going to pass the name of the function , in calling the function

  int sorl;

  for (int i = 0; i < size - 1; i++)
	{

	sorl = i;

	for (int index = i + 1; index < size; index++)
	  {

	  if (!(*compare)(work[sorl], work[index]))

	   // de-referencing the (*compare) function like this, and this now acts as a function -----> bool compare(int ,int)


		sorl = index;

	  }

	swap(&work[sorl], &work[i]);
	}
}

void swap(int *const element1ptr, int *const element2ptr) {

  int hold;
  *element1ptr = *element2ptr;
  *element2ptr = hold;

}

bool ascending(int a, int b) {
  return a < b;
}

bool descending(int a, int b) {

  return a > b;
}
















