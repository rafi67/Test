#include <iostream>

using namespace std;

class Shape {

    public:
        short a, b;

    public:
        void get_a_b() {
            cout << "Enter value of a and b: ";
            cin >> a >> b;
        }

};

class Rectangle : public Shape {

    public:
        void rectangle() {
            float result = a*b;
            cout << "Rectangle = " << result << endl;
        }

        Rectangle() {
            get_a_b();
            rectangle();
        }

        ~Rectangle() {
            cout << "Destructor called" << endl;
        }

};

class Triangle : public Shape {

    public:
        void triangle() {
            float result = 0.5 * a * b;
            cout << "Triangle = " << result << endl;
        }

        Triangle() {
            get_a_b();
            triangle();
        }

        ~Triangle() {
            cout << "Destructor called" << endl;
        }

};