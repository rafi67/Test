#include <iostream>

using namespace std;

class A3 {

    public:
        virtual void display() {
            cout << "Class A" << endl;
        }

};

class B3 : public A3 {

    public:
        void display() {
            cout << "Class B" << endl;
        }

};