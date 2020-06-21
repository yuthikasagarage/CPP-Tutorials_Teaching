#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

ull odd = 0;
ull even = 0;

// use of callable objects
/*
 * can be either function objects like this or other four different ways
 */



void find_even(ull start, ull end){
    for(ull i = start ; i < end ; i ++){
        if ((i & 1) == 0) {
            even ++;
        }
    }

}

void find_odd(ull start, ull end){
    for(ull i = start ; i < end ; i ++){
        if ((i & 1) == 1) {
            odd ++;
        }
    }

}



int main() {
    cout << "Hello, World!" << endl;

    auto start_time = high_resolution_clock::now();


    ull start = 0 ;
    ull end = 1900000000;

    std::thread t1(find_even, start, end);
    std::thread t2(find_odd, start, end);

    t1.join();
    t2.join();
//
//    find_even(start, end);
//    find_odd(start, end);
    auto stopTime = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stopTime - start_time);



    cout << double(duration.count())/1000000 << endl;






    return 0;
}
