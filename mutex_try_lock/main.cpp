#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <mutex>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;
std::mutex m;

int myAccount = 0;

void addmoney() {
    for (int i = 0; i < 100000; i++) {
        if (m.try_lock())
//        //---> gives you something less than 200000 since some skips the increment because lock is not released
            // m.lock();
            ++myAccount;
        m.unlock();
    }
}


int main() {
    cout << "Hello, World!" << endl;

    thread t1(addmoney);
    thread t2(addmoney);

    t1.join();
    t2.join();
    cout << myAccount << endl;


    return 0;
}
