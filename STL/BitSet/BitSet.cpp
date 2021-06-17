#include <iostream>
#include <bitset>
#define M 32

using namespace std;

class BS {

    public:
        void show() {
            bitset<M>b;
            b[0] = 1;
            b[1] = 2;
            b[2] = 3;

           cout << b << endl;
        }

};

int main() {

    BS b;
    b.show();

    return 0;

}