#include <iostream>
#include <deque>
#include <iterator>
#include <algorithm>
using namespace std;



int main() {





  deque<double> values;
  ostream_iterator<double> output(cout, " ");


  values.push_front(1);
  values.push_front(1);
  values.push_front(1);
  values.push_front(1);


  copy(values.begin(), values.end(), output);

  values[3] = 4;
	cout << endl;
  copy(values.begin(), values.end(), output);
  cout << endl;

  values.pop_front();
  copy(values.begin(), values.end(), output);




  return 0;
}
