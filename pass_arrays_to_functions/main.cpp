#include <iostream>
#include <iomanip>

using namespace std;
void modifyarray2(int y[], int x);
void modifyarray(int y[], int x); // you get the base pointer of the array
void modifyelement(int x);
void modifyelementbyreference(int &x);
int main() {


  const int arraysize = 5;


// this variable is not modifiable

  int a[arraysize] = {0, 1, 2, 3, 4};

  for (int i = 0; i < 5; i++)
	{

	cout << std::setw(3) << a[i]  ;
	}

  modifyarray(a, arraysize);
  cout <<endl;

  for (int i = 0; i < 5; i++)
	{

	cout << std::setw(3) << a[i] ;
	}

  modifyelement(a[2]);

  cout <<endl;
  for (int i = 0; i < 5; i++)
	{

	cout << std::setw(3) << a[i];
	}

  modifyelementbyreference(a[2]);

  cout <<endl;
  for (int i = 0; i < 5; i++)
	{

	cout << std::setw(3) << a[i];
	}




  return 0;
}

void modifyarray(int *y, int x) {

  for (int k = 0; k < x; k++)
	{

	y[k] *= 2;
	}

}

void modifyarray2(int y[], int x) { // this is the same as above , both of them are right

  for (int k = 0; k < x; k++)
	{

	y[k] *= 2;
	}

}








void modifyelement(int x) { // receiving by value

  x *= 2;
}







void modifyelementbyreference(int &x) { // receiving by value

  x *= 2;
}
