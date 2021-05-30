#include <iostream>
#include "RuntimePoly.h"

using namespace std;

int main() {
    
    A3 *poly;
    A3 a;
    B3 b;
    poly = &a;
    poly->display();
    poly = &b;
    poly->display();

    return 0;

}