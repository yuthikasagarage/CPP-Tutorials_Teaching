//
// Created by yuthika on 2020-04-28.
//

#include "Array.h"

using namespace std;

#include <iomanip>
#include <cstdlib>

Array::Array( int arraySize ) {
  int x[2] ={1,2}; // x has the base pointer of the array

  size = (arraySize > 0 ? arraySize : 10); // validate arraySize

  ptr = new int[size]; // create space starting form the base address ptr

  //IN HERE ptr is the base address of the array




  for (int i = 0; i < size; i++)
	{


	*(ptr + i) = 0;
	// same thing easier this way
	 ptr[i] = 0;


	} // end Array default constructor
}
// ---------> DYNAMIC MEMORY ARRAY
/*
 *
 * int* a = NULL;   // Pointer to int, initialize to nothing.
	int n;           // Size needed for array
	cin >> n;        // Read in the size
	a = new int[n];  // Allocate n ints and save ptr in a. // here new returns an pointer of type int[]
	for (int i=0; i<n; i++) {
    	a[i] = 0;    // Initialize all elements to zero.
	}
. . .  // Use a as a normal array

	delete [] a;  // When done, free memory pointed to by a.
	a = NULL;     // Clear a to prevent using invalid memory reference.
 */


Array::Array(const Array &array_to_copy) : size(array_to_copy.size) { // it must be a reference for copy constructor
  //size = array_to_copy.size; // like this or initializer list

  ptr = new int[size];

  for (int i = 0; i < size; i++)
	{
	ptr[i] = array_to_copy.ptr[i];
	}

}

Array::~Array() {

  delete[]ptr;
  ptr = nullptr;

}

int Array::getsize() const {

  return size;
}

ostream &operator<<(ostream &output, const Array &array) {

  int i;

  for( i = 0 ; i < array.size; i ++)
	{

	output << setw(12) << array.ptr[i];
	if ((i + 1) % 4 == 0)
	  {
	  output << endl;
	  }
	}
	if (i % 4 != 0)
	  {
	  output << endl;
	  }

  return output;
}



istream &operator>>(istream & input, const Array &array) {
  for(int i = 0 ; i < array.size; i ++ ){
	input >> array.ptr[i];
  }

  return input;
}


int &Array::operator[](int x) {

  if (x < 0 || x >= size)
	{

	cout << "error" << endl;

	exit(1);
	}

  return ptr[x];
}

int Array::operator[](int x) const {

  if (x < 0 || x >= size)
	{

	cout << "error" << endl;

	exit(1);
	}
  return ptr[x];
}



bool Array::operator==(Array &right) const {

  if (size != right.size)
	{
	return false;
	}

  for (int i = 0; i < size; i++)
	{

	if (ptr[i] != right.ptr[i])
	  {

	  }
	return false;

	}
  return true;
}

const Array &Array::operator=(Array &right) {

  if (&right != this)
	{

	if (size != right.size)
	  {

	  delete[]ptr;
	  size = right.size;
	  ptr = new int[size];
	  }

	for (int i = 0; i < size; i++)
	  {

	  ptr[i] = right.ptr[i];
	  }

	return *this;

	}
}