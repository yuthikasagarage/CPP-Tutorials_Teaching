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
 * functors with overloaded () operator
 * static member functions
 * non static member functions
 * lambda expression inside the thread creation
 */

//1) function pointers

void fun(int x){
    while (x --> 0){
        cout << x << endl;
    }
}
// functor :D

class base{
public:
    void operator()(int x){
        while (x--> 0){
            cout << x << endl;
        }
    }

    void run (int x){
        while (x--> 0){
            cout << x << endl;
        }
    }

    static void run1 (int x){
        while (x--> 0){
            cout << x << endl;
        }
    }



};


int main() {
    cout << "Hello, World!" << endl;

    auto start_time = high_resolution_clock::now();


    ull start = 0 ;
    ull end = 1900000000;

    thread t1(fun, 11);
    // here we can use lambda function directly in the thread creation

    thread t2 ([](int x){
       while (x-->10){
           cout <<x << endl;
       }
    }, 20);

    // functor with overloaded () operator
    thread t3 (base(), 10);

    //Non static member function

    base b;
    thread t4 (&base::run, &b, 10);

    // static member functions

    thread t5 (&base::run1, 10);

    t1.join();
    t2.join();
    t3.join();
    t4. join();
    t5.join();

//    find_even(start, end);
//    find_odd(start, end);
    auto stopTime = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stopTime - start_time);



    cout << double(duration.count())/1000000 << endl;
    return 0;
}
