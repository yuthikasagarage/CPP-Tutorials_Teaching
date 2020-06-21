#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

ull odd = 0;
ull even = 0;


void fun(int x) {
    while ((x--) > 0) {
        cout << x << endl;
        std::this_thread::sleep_for(chrono::seconds(3));
    }

}


class base {
public:
    void operator()(int x) {
        while (x-- > 0) {
            cout << x << endl;
        }
    }

    void run(int x) {
        while (x-- > 0) {
            cout << x << endl;
        }
    }

    static void run1(int x) {
        while ((x--) > 0) {
            cout << x << endl;
        }
    }


};


int main() {
    cout << "Hello, World!" << endl;


    ull start = 0;
    ull end = 1900000000;

    thread t1(fun, 4);
    cout << "hello this is main thread" << endl;
//    if(t1.joinable())
//        t1.join();
    // join blocks the current thread execution until the thread is completed on which the join() is called
    // in this case it blocks the main thread from executing until the t1 thread is completed.

    // if detach is used it is not waiting or anything
    t1.detach();

    cout << "hello this is main thread after" << endl;

    return 0;
}
