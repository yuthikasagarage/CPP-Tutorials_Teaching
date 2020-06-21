#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <mutex>
#include <condition_variable>
#include <future>
#include <deque>
using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;
std::condition_variable cond;
std::mutex m;
int maxBuffersize = 1;
int balance = 0;
deque<int> buffer1;
int myAccount = 0;

void producer(int val){
    while (val){
        std::unique_lock<std::mutex> locker(m);
        cond.wait(locker,[](){return buffer1.size() < maxBuffersize;});
        buffer1.push_back(val);
        cout << "producing " << val << endl;
        val--;
        locker.unlock();
        cond.notify_all();
    }
}

void consumer(){
    while (true){
        std::unique_lock<std::mutex> locker(m);
        cond.wait(locker, [](){return !buffer1.empty();});
        int val = buffer1.back();
        buffer1.pop_back();
        cout << "consumed "  << val << endl;
        locker.unlock();
        cond.notify_all();
        if(val == 1){
            break;
        }
    }

}


int main() {



    thread t1(producer, 10);
    thread t2(consumer);

    t1.join();
    t2.join();
    return 0;
}
