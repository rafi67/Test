#include <iostream>

using namespace std;

class Shape {

    protected:
        short a, b;
    
    public:
        void get_a_b(short n, short m) {
            a = n;
            b = m;
        }


};

class Rectangle : public Shape {

    public:
        short rectangle_area() {
            short result = a*b;
            return result;
        }

};

class Triangle : public Shape {

    public:
        float triangle_area() {
            float result = 0.5 * a * b;
            return result;
        }

};

int main() {

    Rectangle r;
    Triangle t;
    short length, beadth, height, base;

    cout << "Enter value of length and beadth: ";
    cin >> length >> beadth;
    r.get_a_b(length, beadth);
    cout << "Area of Rectangle is " << r.rectangle_area() << endl;

    cout << "Enter value of height and base: ";
    cin >> height >> base;
    t.get_a_b(height, base);
    cout << "Area of Triangle is " << t.triangle_area() << endl;

    return 0;

}