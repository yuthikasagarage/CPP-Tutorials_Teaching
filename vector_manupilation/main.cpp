#include <iostream>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <vector>
using namespace std;

int main() {

  const int size = 6;
  int array[size] = {1, 2, 3, 4, 5, 6};
// version of the vector constructor, copy an array to a vector
  vector<int> integers_vector(array, array + size);
  std::ostream_iterator<int> x(cout, " ");
  std::copy(integers_vector.begin(), integers_vector.end(), x); // this copy algorithm
  cout << endl;

  cout << integers_vector.front() << " " << integers_vector.back();
  cout << endl;

  integers_vector[0] = 8;
  integers_vector.at(5) = 10;

  integers_vector.insert(integers_vector.begin() + 1, 22);
  std::copy(integers_vector.begin(), integers_vector.end(), x);

  cout << endl;
  try
	{

	integers_vector.at(100) = 90;

	}
  catch (out_of_range &)
	{
	cout << "custom caught throw" << endl;
	}
  cout << endl;

  integers_vector.erase(integers_vector.begin());
  std::copy(integers_vector.begin(), integers_vector.end(), x);

  cout << endl;
  integers_vector.erase(integers_vector.begin(), integers_vector.end());
  std::copy(integers_vector.begin(), integers_vector.end(), x);
  cout << endl;


  integers_vector.insert(integers_vector.begin(), array, array+size);
  std::copy(integers_vector.begin(), integers_vector.end(), x);
  cout << endl;

  integers_vector.clear();
  std::copy(integers_vector.begin(), integers_vector.end(), x);




  return 0;
}
