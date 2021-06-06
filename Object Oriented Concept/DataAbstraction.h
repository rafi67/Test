#include <iostream>

using namespace std;

class Abstraction {
    
    private:
        short x, y, z;

    public:

        void setX(short x) {
            this->x = x;
        }

        void setY(short y) {
            this->y = y;
        }

        void display() {
            cout << "value of x is " << x << endl << "value of y is " << y << endl;
        }

};