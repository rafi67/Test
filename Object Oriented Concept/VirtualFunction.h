#include <iostream>

using namespace std;

class A3 {

    short x = 5;

    public:
        virtual void display() {
            cout << "x = " << x << endl;
        }

};

class B3 : public A3 {

    short y = 10;

    public:
        void display() {
            cout << "y = " << y << endl;
        }

};