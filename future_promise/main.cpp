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


void findodd(std::promise<ull> &&OddsumPromise, ull start, ull end) {
    ull oddsum = 0;
    for (ull i = start; i <= end; ++i) {
        if (i & 1) {
            oddsum += i;
        }
    }
    OddsumPromise.set_value(oddsum);
}

int main() {
    cout << "Hello, World!" << endl;
    ull start = 0, end = 190000000;
    std::promise<ull> Oddsum;
    std::future<ull> OddFuture = Oddsum.get_future();


    thread t1(findodd, std::move(Oddsum), start, end);
    cout <<"waiting for result" << endl;
    cout << "odd sum " << OddFuture.get() <<endl;
    t1.join();
    return 0;
}
