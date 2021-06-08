#include <iostream>

using namespace std;

float division(short x, short y) {
    if(y == 0) {
        throw "Attempted to divide by zero";
    }
    return x/y;
}