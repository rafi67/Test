#include <iostream>

using namespace std;

class A1 {

    public:
        void greet() {
            cout << "Hi!" << endl;
        }

};

class B1 {

    public:
        void hello() {
            cout << "Hello World!" << endl;
        }

};

class C1 {

    public:
        void car() {
            cout << "BMW" << endl;
        }

};

class D : public A1, public B1, public C1 {

    public:
        D() {
            greet();
            hello();
            car();
        }
        ~D() {
            cout << "Destructor is called" << endl;
        }

};