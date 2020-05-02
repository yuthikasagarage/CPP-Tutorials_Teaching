#include <iostream>

#include <queue>

using namespace std;

template<typename T>
void pushE(T &stackref);
template<typename T>
void popE(T &stackref);

int main() {

  queue<int> queue1;


  pushE(queue1);

  popE(queue1);



  return 0;
}

template<typename T>
void pushE(T &stackref) {
  for (int i = 0; i < 10; i++)
	{

	stackref.push(i);
	cout << stackref.back()<<" ";

	}
  cout << endl;
}
template<typename T>
void popE(T &stackref) {

  while(!stackref.empty())
	{
	cout << stackref.front() << " " ;
	stackref.pop();
	}
  cout << endl;
}
