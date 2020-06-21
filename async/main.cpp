#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <mutex>
#include <condition_variable>
#include <future>


using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;
std::mutex m;
int balance = 0;
int buffer = 0;
int myAccount = 0;


ull findodd(ull start, ull end) {
    ull oddsum = 0;
    for (ull i = start; i <= end; ++i) {
        if (i & 1) {
            oddsum += i;
        }
    }
    return oddsum;
}

int main() {
    cout << "Hello, World!" << endl;
    ull start = 0, end = 190000000;

//    std::future<ull> OddFuture = std::async(std::launch::deferred, findodd, start, end);
    std::future<ull> OddFuture = std::async(std::launch::async, findodd, start, end);
//here thread is created in the inside


    cout <<"waiting for result" << endl;
    cout << "odd sum " << OddFuture.get() <<endl;

    return 0;
}
