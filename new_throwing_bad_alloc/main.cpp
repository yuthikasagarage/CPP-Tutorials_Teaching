#include <iostream>
#include <iomanip>
using namespace std;

#include <new>
void function1() throw();
int main() {

  int *ptr[2]; // statically pointer array stack

	int p [2];


	cout << "this is the size of the array of type int size 5 " <<sizeof(p) << endl;
	cout << "this is the size of a one element of the array "<<sizeof(p[0]) << endl;

	cout << endl;

	cout << "this is the size of the int* array fo size 5 " <<sizeof(ptr) << endl;
  	cout << "this is the size of the single int* element " <<sizeof(ptr[0]) << endl;

  	cout << endl;

	cout << "which means that p and p[0] is not the same even whether their addresses start from the same address" << endl;
	cout << " p hold the memory for the whole array , opposite to that p[0] hold memory for the first element of the array" << endl;

  try
	{
	for (int i = 0; i < 2; i++)
	  {
	  int size = 3;

	  ptr[i] = new int[size];
	  cout << i << " array of int " << endl;
	  //*(ptr + i) = new int[size];

	  for (int j = 0; j < size; j++)
		{
		cout << "value : " ;
		cout << *(ptr[i] + j) ;  // <------- this should give 0's as value
		//cout << (ptr[i])[j] ; <------ same thing
		cout << "  address :";
		cout << ptr[i] + j << endl; //<----- these are in order as well since it's an array of type int

		}
		cout << endl;
		cout << "The value of the pointer variable which points to the base address of int array of size : "<<ptr[i] << endl;// <---- these are not in order
	  	cout << "addresses of array of int* , these are contiguous addresses  : " <<&ptr[i] << endl;  // <------- these are in order , it is an array of type int*
	  	cout << endl;

	  }

	cout << "assigning doubles" << endl;
//	throw bad_alloc();
	}

  catch (bad_alloc &b)
	{
	cerr << "bad caught    :" << b.what() << endl;

	}

  try
	{

	function1();

	}
  catch (runtime_error &r)
	{
	cerr << r.what() << endl;
	}

  return 0;
}

void function1() throw() { // this just says that this function might threw an exception

  throw runtime_error(" haha : runtime runtime error");

}

/*
 *   cout << ptr[0] << endl; //  these memory addresses are all over the place
  cout << &ptr[0] << endl; //  memory location of the pointer variable

  cout << ptr[1] << endl; //  these memory addresses are all over the place
  cout << &ptr[1] << endl; //  memory location of the pointer variable

 */



//  double xx[2] = {1, 2}; // statically allocate array
//  *(xx + 1) = 5;
//
//  int **p = new int *[10];
//  double **ptrx = new double *[2]; // dynamically allocated pointer array
//  double *x = new double[2]; // dynamically allocate an array





//	  for(int j = 0 ; j < size ; j ++){
//
//		(ptr[i])[j] = j;
//	  cout <<"i :" << i << "  "<<"j  " << j << " " << "value " <<*(ptr[i]+j) << " " << (ptr[i])[j]<<"  pointer :"<< ptr[i]+j << endl;
//	}

//  int xxx[2] = {1, 2};
//
//  for (int i = 0; i < 2; i++)
//	{
//
//	cout << xxx + i << endl;
//	}

//  	double *p = new double [20];
//
//  	cout <<p[0] << endl;
//
//
//
//  	double *ptrx[50];
//
//	*ptrx[0] = 10;
//
//  	cout << (ptrx[0]) << endl;
//x[0] = 5;
// cout << *x << endl;
