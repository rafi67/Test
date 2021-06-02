#include <iostream>
#include "Compiletpoly2.h"

using namespace std;

int main() {

    Cal c;
    cout << "Sum of a and b is " << c.sum(12, 12) << endl;
    cout << "Sum of a, b and c is " << c.sum(23, 44, 1) << endl;

    return 0;

}