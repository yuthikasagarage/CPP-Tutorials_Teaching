#include <iostream>
#include <list> // only bi-directional - linked list
#include <algorithm>
#include <iterator>
using namespace std;

template< typename T> void printlist(const list<T> &listref);

int main() {

  const int Size = 4;
  int array[Size] = {1,2,3,4};

  list<int> values;
  list<int> other_values;


  values.push_front(1);
  values.push_front(2);
  values.push_front(4);
  values.push_front(2);

  printlist( values);

  values.sort();

  printlist( values);

  other_values.insert(other_values.begin(), array, array+Size);

  printlist(other_values);

  values.splice(values.end(), other_values); // concatenate list

  printlist(values);

  values.sort();

  printlist(values);

  values.merge(other_values);
  printlist(values);


  values.unique();
  printlist(values);

  values.swap(other_values);

  printlist(values);


  return 0;
}
template< typename T> void printlist(const list<T> &listref){

  std::ostream_iterator <T> output (cout , " ");
  copy(listref.begin(),listref.end(),output);
  cout<< endl;

}
