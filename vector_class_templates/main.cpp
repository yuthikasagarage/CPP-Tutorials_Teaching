#include <iostream>
#include <vector>
using namespace std;

template< typename  T>
void printVector(const vector<T> &arrayofintgers);

int main() {


  const int SIZE = 6;
  int array[SIZE] = {1,2,21,5,2,5};
  vector<int> integer_array;

  cout << "initial size " << integer_array.size() << "  , capacity " << integer_array.capacity() << endl;

  integer_array.push_back(2);
  integer_array.push_back(3);
  integer_array.push_back(4);

  cout << " size " << integer_array.size() << "  , capacity " << integer_array.capacity() << endl;



  for (int * ptr = array; ptr!= array+ SIZE; ptr++){ // iterate through array with a pointer
	cout << *ptr << ' ';

  }
  cout << endl;
  printVector(integer_array);
  cout << endl;


  typename vector<int>:: const_reverse_iterator reverse;
  typename vector<int>:: const_reverse_iterator  temp = integer_array.rend();


  for(reverse = integer_array.rbegin(); reverse!= temp; ++reverse ){ // start from the beginning of reverse
	cout << *reverse << " ";
  }

  return 0;
}
template< typename  T>
void printVector(const vector<T> &arrayofintgers){



  typename vector<T>::const_iterator constIterator;
  // if we look at the syntax it looks like a static variable syntax but it's not , this is not a static member of class vector
  // it's an actual typename define inside the typename, that's why we have to provide typename at first



  // constIterator is a variable of type vector<T>::const_iterator
  // each of the containers has typedef defined in containers

  /*
   * allocator_type
   * value_type
   * const_reference
   * reference
   *
   * pointer
   * const_pointer
   *
   * iterator
   * const_iterator
   */
// iterator is more like a pointer but nooooot but it issss but nooot

  for(constIterator = arrayofintgers.begin(); constIterator != arrayofintgers.end(); ++constIterator){
	cout << *constIterator << " ";
  }








}