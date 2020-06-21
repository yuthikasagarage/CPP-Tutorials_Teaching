#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <mutex>
#include <condition_variable>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;
std::mutex m;
int balance = 0;
int buffer = 0;
int myAccount = 0;
std::condition_variable cv;

void addMonet(int money) {
    std::lock_guard<mutex> lg(m);
    balance += money;
    cout << "amount added to account " << money << endl;
    cv.notify_one();
}

void WMoney(int money) {
    std::unique_lock<mutex> ul(m);
    cv.wait(ul, []{
        return balance != 0;
    });
    if (balance>=money){
        balance -=money;
        cout << "amount deducted " << money << endl;
    }else{
        cout << "overdrawen" <<endl;
    }

}
/*
 * CONDITION VARIABLES ALLOW RUNNING THREADS TO WAIT ON SOME CONDITIONS AND ONCE THOSE CONDITIONS ARE MET THE WAITING THREAD HAS TO BE NOTIFIED BY
 * notify_one() or notify_all
 *
 * wait_for and wait_until is also there for the wait
 */

int main() {
    cout << "Hello, World!" << endl;
    thread t2(WMoney, 300);

    std::this_thread::sleep_for(std::chrono::seconds(2));
    thread t1(addMonet, 200);


    t1.join();
    t2.join();


    return 0;
}
