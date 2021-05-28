#include <iostream>

using namespace std;

class A {

    public:
        short sum(short a, short b) {
            return a+b;
        } 

};

class B : public A {

    public:
        B(short r, short t) {
            short result = sum(r,t);
            display(result);
        }

        void display(short result) {
            cout << "Result = " << result << endl;
        }

};