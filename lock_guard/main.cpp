#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <mutex>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;
std::mutex m;
int buffer = 0;
int myAccount = 0;

void task(const char* number, int loopfor){
    //m.lock();// rather than creating the lock here we can use lock_guard
    std::lock_guard<mutex> lock(m); // this is a soft wrapper for owning mutex on scoped basis
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
