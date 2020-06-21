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
std::mutex m1, m2;
void timers(int seconds){
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}


void incrementxy(int &xory , std::mutex &m , const char * desc){
    for(int i = 0; i < 5; i ++){
        m.lock();
        ++xory;
        cout << desc << xory << endl;
        m.unlock();
        timers(1);
    }
}

void consumer(){
    int usecount = 5;
    int xplusy = 0;

    while (1){
        int lockResult = std::try_lock(m1,m2); // static member function
        if(lockResult == -1){ // if result is -1 in try_lock then we have the lock for the two of the mutexes.
            if(x!=0 && y != 0){
                --usecount;
                xplusy += x +y;
                x = 0;
                y= 0;
                cout << "xplusy " <<xplusy <<endl;
            }
            m1.unlock();
            m2.unlock();
            if(usecount == 0){
                break;
            }
        }
    }
}



int main() {
    cout << "Hello, World!" << endl;

    thread t1(incrementxy, std::ref(x), std::ref(m1), "x");
    thread t2(incrementxy, std::ref(y), std::ref(m2), "y");
    thread t3(consumer);

    t1.join();
    t2.join();
    t3.join();
    cout << myAccount << endl;


    return 0;
}
