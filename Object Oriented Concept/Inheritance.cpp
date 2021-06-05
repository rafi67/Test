#include <iostream>
#include "PureVirtualFunction.h"

using namespace std;

int main() {

    
    Base *b;
    Derived d;

    b = &d;

    b->show();

    return 0;

}