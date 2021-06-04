#include <iostream>

using namespace std;

class Animal {

    public:
        void eat() {
            cout << "eating..." << endl;
        }

};

class Dog : public Animal {

    public:
        void eat() {
            cout << "eating bread" << endl;
        }

};

class Test {

    public:
        Test() {
            Dog d = Dog();
            d.eat();
        }
        ~Test() {
            cout << "Test Destructor is called" << endl;
        }

};