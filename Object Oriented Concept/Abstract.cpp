#include <iostream>

using namespace std;

class Shape {

    public:
        virtual void draw() = 0;

};

class Rectangle : public Shape {

    public:
        void draw() {
            cout << "Drawing Rectangle" << endl;
        }

};

class Triangle : public Shape {

    public:
        void draw() {
            cout << "Drawing Triangle" << endl;
        }

};