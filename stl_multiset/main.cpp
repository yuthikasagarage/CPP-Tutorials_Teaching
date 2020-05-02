#include <iostream>
#include <set>

#include <algorithm>
#include <iterator>

typedef std::multiset<double, std::less<>> Ims ;
// this represents a multiset which has two typ e parameters,
// 1st one is the type we want to put into the multiset and 2nd one is a comparator function object
//std::less<>
//std::greater<>

using namespace std;


int main() {

  const int size = 10;

  int a [size] = {1,2,4,5,6,4,4,9,6,6};

  Ims multiset;
  ostream_iterator<int> output(cout, " " );


cout << multiset.count(15) << endl; // check whether 15 is in the set



	multiset.insert(14);
    multiset.insert(14);

 	 cout << multiset.count(14) << endl; // check whether 15 is in the set

	Ims::const_iterator result;

	result = multiset.find(14); //find returns an iterator which is aimed at the first element found in multiset

	multiset.insert(a, a+size);

	copy(multiset.begin(), multiset.end(), output);



/*
 * look in deitel book for more details
 */












  return 0;
}
