#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>

typedef std::map<int, double, std::less<>> Ims1 ; //
// this represents a multiset which has two typ e parameters,
//  types we want to put into the multimap and key value pairs 2nd one is a comparator function object
//std::less<>
//std::greater<>
// map doesn't allow duplicate keys
using namespace std;


int main() {

  const int size = 10;

  int a [size] = {1,2,4,5,6,4,4,9,6,6};

  Ims1 map1;

  ostream_iterator<int> output(cout, " " );


  cout << map1.count(15) << endl; // check whether 15 is in the set

  map1.insert(Ims1::value_type(15, 27));
  map1.insert(Ims1::value_type(15, 24)); // this is ignored
  map1.insert(Ims1::value_type(1, 24));
  map1.insert(Ims1::value_type(5, 24)); // this is ignored
  map1.insert(Ims1::value_type(25, 24));
  map1.insert(Ims1::value_type(115, 24));

  cout << map1.count(15) << endl; // check whether 15 is in the set

  // and also this is also sorted by keys in ascending order

  for(Ims1::const_iterator iter = map1.begin(); iter !=map1.end(); iter++){

	cout << iter->first << " " << iter-> second << "\n" ;
	}


cout << endl;

  map1[25] = 100 ; // go to the key 25 and assign the 100 to it's value
  map1[455] = 1100 ; // add a key and value pair, key is 455 value is 1100

  for(Ims1::const_iterator iter = map1.begin(); iter !=map1.end(); iter++){

	cout << iter->first << " " << iter-> second << "\n" ;
	}


/*
 * look in deitel book for more details
 */





  return 0;
}
