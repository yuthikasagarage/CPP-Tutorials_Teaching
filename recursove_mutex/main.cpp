#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <mutex>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;
std::recursive_mutex m;
int buffer = 0;
int myAccount = 0;
int ii = 0;

void recursion(char c, int loopfor) {

    if (loopfor < 0)
        return;
    m.lock();
    cout << c << " " << buffer++ << endl;
    recursion(c, --loopfor);

    ii++;
    cout << "unlocking " << ii << " times" << endl;
    m.unlock();

}


int main() {
    cout << "Hello, World!" << endl;

    thread t1(recursion, '0', 2);
    thread t2(recursion, '1', 2);

    t1.join();
    t2.join();
    cout << myAccount << endl;


    return 0;
}
