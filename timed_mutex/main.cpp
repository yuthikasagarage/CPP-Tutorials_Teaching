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

int x , y = 0;
std::timed_mutex m1;

void increment(int i){

    if(m1.try_lock_for(std::chrono::seconds(1))){ //if you put 3 here thread 2 will wait till 3 seconds so everything works
                                                                // if you put 1 here thread 2 will only wait for 1 seconds and
                                                                // it gets false and will jump to false it cannot acquire the lock
        ++myAccount;
        cout << " Thread " << i << " entered" << endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        cout << " Thread " << i << " is sleeping" << endl;
        m1.unlock();
    } else{
        cout << " Thread " << i << " couldn't enter" << endl;
    }

}
void increment1(int i){

    if(m1.try_lock_until(std::chrono::steady_clock::now() + std::chrono::seconds(1))){ //if you put 3 here thread 2 will wait till 3 seconds so everything works
        // if you put 1 here thread 2 will only wait for 1 seconds and
        // it gets false and will jump to false it cannot acquire the lock
        ++myAccount;
        cout << " Thread " << i << " entered" << endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        cout << " Thread " << i << " is sleeping" << endl;
        m1.unlock();
    } else{
        cout << " Thread " << i << " couldn't enter" << endl;
    }

}



int main() {
    cout << "Hello, World!" << endl;

    thread t1(increment, 1);
    thread t2(increment, 2);


    t1.join();
    t2.join();

    cout << myAccount << endl;


    return 0;
}
