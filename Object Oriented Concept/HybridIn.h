#include <iostream>

using namespace std;

class A2 {

    public:
        void bike() {
            cout << "this is a bmw bike" << endl;
        }

};

class B2 : public A2 {

    public:
        void cycle() {
            cout << "This is a bmw cycle" << endl;
        }

};

class C2 {

    public:
        void display() {
            cout << "This is a display function" << endl;
        }

};

class D2 : public B2, public C2 {

    public:
        D2() {
            bike();
            cycle();
            display();
        }
        ~D2() {
            cout << "Destructor is called" << endl;
        }

};