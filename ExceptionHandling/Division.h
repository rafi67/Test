#include <iostream>

using namespace std;

float division(short x, short y) {
    if(y == 0) {
        throw "Attempted to divide by zero";
    }
    return x/y;
}

void div() {
    short i = 25;
    short j = 0;
    float k = 0;
    try{
        k = division(i,j);
        cout << k << endl;
    }
    catch(const char* e) {
        cerr << e << endl;
    }
}