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
void addmoney(){
    m.lock();
    ++myAccount;
    m.unlock();
}




int main() {
    cout << "Hello, World!" << endl;

    thread t1(addmoney);
    thread t2(addmoney);

    t1.join();
    t2.join();
    cout<< myAccount << endl;


    return 0;
}
