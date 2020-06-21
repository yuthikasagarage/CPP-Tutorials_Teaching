#include <iostream>
#include <set>

#include <algorithm>
#include <iterator>

typedef std::set<double, std::less<>> Ims ;
// this represents a multiset which has two typ e parameters,
// 1st one is the type we want to put into the multiset and 2nd one is a comparator function object
//std::less<>
//std::greater<>

using namespace std;


int main() {

  const int size = 10;

  int a [size] = {1,2,4,5,6,4,4,9,6,6}; // duplicates are deleted

  Ims set1;
  ostream_iterator<int> output(cout, " " );


  cout << set1.count(15) << endl; // check whether 15 is in the set



  set1.insert(14);
  set1.insert(14);

  cout << set1.count(14) << endl; // check whether 15 is in the set

  Ims::const_iterator result;

  result = set1.find(14); //find returns an iterator which is aimed at the first element found in set1

  set1.insert(a, a+size);

  copy(set1.begin(), set1.end(), output);



/*
 * look in deitel book for more details
 */












  return 0;
}
