#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;
char nextLetter();

int main() {

  vector<char> chars(10);
  ostream_iterator<char> output(cout, " ");
  fill(chars.begin(), chars.end(), '5');
  copy(chars.begin(), chars.end(), output);
  fill_n(chars.begin(), 5, 'A');
  copy(chars.begin(), chars.end(), output);
  generate(chars.begin(), chars.end(), nextLetter);
  copy(chars.begin(), chars.end(), output);

  return 0;
}

char nextLetter() {

  static char letter = 'A';
  return letter++;
}