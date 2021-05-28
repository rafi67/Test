#include <iostream>

using namespace std;

class Animal {

    public:
        void eat() {
            cout << "Eating..." << endl;
        }

};

class Dog : public Animal {

    public:
        void bark() {
            cout << "Barking..." <<  endl;
        }

};

class BabyDog : public Dog {
    
    public:
        void beep() {
            cout << "Beeping..." << endl;
        }

        BabyDog() {
            eat();
            bark();
            beep();
        }

};