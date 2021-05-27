#include <iostream>
#include "Header.h"

using namespace std;

Example :: Example() {
    cout << "Constructor is called" << endl;
}

Example :: ~Example() {
    cout << "Destructor is called" << endl;
}

void Example :: display() {
    cout << "Hello World" << endl;
}