#include <iostream>
#include <iterator>

using namespace std;

/*
 * 	iterator category hierarchy
 * 	input
 * 	output
 * 	forward
 * 	bi-directional
 * 	random access*
 *
 *
 */

/*
 * vector - random access
 * deque random access
 * list bi directional
 *
 *
 * set - bidirectional
 * multi set - same
 * map - same
 * multimap same
 *
 * stack - no iterator support
 * queue - same
 * priority queue - same
 **
 *
 */

/* 			REFERENCE THE DEITEL BOOK
 * 			Iterator operations
 *
 * 			all iterators
 * 			++p - pre- increment iterator
 * 			p++ - post
 *
 * 			input iterators
 * 			*p - dereference iterator
 *
 * 			bi -directional iterators
 * 			--p
 * 			p--
 *
 * 			random access iterators
 * 			p+= i
 * 			p-= i
 * 			p[i]
 * 			p+i, p-i
 * 			p>p1
 * 			p<p1
 * 			p>=p1
 * 			p<=p1
 */


int main() {

  istream_iterator<int> inputInt(cin);
  // this is an iterator which can write data of type int , iterator object is inputInt. it acts like a pointer

  int number1 = *inputInt; // when you dereference an input stream iterator it acts like cin statement
  ++inputInt; // move to the next position, increment the iterator
  int number2 = *inputInt; // get 2nd input

  ostream_iterator<int> outputInt(cout);

  *outputInt = number2 + number1;

  return 0;
}

