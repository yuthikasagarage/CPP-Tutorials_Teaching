#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <mutex>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;
std::mutex m;
std::timed_mutex m1;
int buffer = 0;
int myAccount = 0;

/*
 * The class unique_lock is a mutex ownership wrapper just like lock_guard which is used for scope locking
 * unique lock has three locking strategies
 *
 * 1_) defer lock
 * 2_) try_to_lock
 * 3_) adopt_lock
 */

void task(const char* number, int loopfor){

    std::unique_lock<mutex> lock(m, defer_lock);
    //std::unique_lock<std::timed_mutex> lock1(m1, std::chrono::seconds(2)); we can use it like this too
    //you can do somehing here anmd do somestuff
    lock.lock();
    // no locking strategy defaults to try_to_lock
    for(int i = 0; i < loopfor ; i ++){
        buffer++;
        cout << number << " " << buffer << endl;
    }
    m.unlock();
}



int main() {
    cout << "Hello, World!" << endl;

    thread t1(task, "1", 2);
    thread t2(task, "2", 2);

    t1.join();
    t2.join();



    return 0;
}
