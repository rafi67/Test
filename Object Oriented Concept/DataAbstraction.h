#include <iostream>
#include <Cmath>

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

        short getX() {
            return x;
        }

        short getY() {
            return y;
        }

};