#include <iostream>

#include <queue>

using namespace std;

template<typename T>
void pushE(T &stackref);
template<typename T>
void popE(T &stackref);

int main() {

  priority_queue<int> queue1;


  pushE(queue1);

  popE(queue1);

// comes out of priority highest to lowest order

  return 0;
}

template<typename T>
void pushE(T &stackref) {
  for (int i = 0; i < 10; i++)
	{

	stackref.push(i);
	cout << stackref.top()<<" ";

	}
  cout << endl;
}
template<typename T>
void popE(T &stackref) {

  while(!stackref.empty())
	{
	cout << stackref.top() << " " ;
	stackref.pop();
	}
  cout << endl;
}
