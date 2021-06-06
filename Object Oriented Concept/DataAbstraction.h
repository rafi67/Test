#include <iostream>
#include <Cmath>

using namespace std;

class Abstraction {
    
    private:
        short x, y, z;

    public:
        void add() {
            z = x+y;
            cout << "Sum = " << z << endl;
        }

        void setX(short x) {
            this->x = x;
        }

        void setY(short y) {
            this->y = y;
        }

};