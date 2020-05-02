#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>

typedef std::multimap<int, double, std::less<>> Ims1 ; //
// this represents a multiset which has two typ e parameters,
//  types we want to put into the multimap and key value pairs 2nd one is a comparator function object
//std::less<>
//std::greater<>

using namespace std;


int main() {

  const int size = 10;

  int a [size] = {1,2,4,5,6,4,4,9,6,6};

  Ims1 multimap1;

  ostream_iterator<int> output(cout, " " );


  cout << multimap1.count(15) << endl; // check whether 15 is in the set

  multimap1.insert(Ims1::value_type(15,27));
  multimap1.insert(Ims1::value_type(15,24));
  multimap1.insert(Ims1::value_type(1,24));
  multimap1.insert(Ims1::value_type(5,24));
  multimap1.insert(Ims1::value_type(25,24));
  multimap1.insert(Ims1::value_type(115,24));

  cout << multimap1.count(15) << endl; // check whether 15 is in the set


  for(Ims1::const_iterator iter = multimap1.begin(); iter !=multimap1.end(); iter++){

	cout << iter->first << " " << iter-> second << "\n" ;
  }


/*
 * look in deitel book for more details
 */





  return 0;
}
