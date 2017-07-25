// fizzbuzz.cpp
// Joshua Holmes
// <w4jdh@arrl.net>
//
// My FizzBuzz solution in C++
//
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    for (int i = 1; i <= 100; i++) {
        if(i % 15 == 0) { cout << "FizzBuzz" << endl; }
        else if(i % 3 == 0) { cout << "Fizz" << endl; }
        else if (i % 5 == 0) { cout << "Buzz" << endl; }
        else cout << i << endl;
    }
    return 0;
}
