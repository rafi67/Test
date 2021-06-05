#include <iostream>
#include "VirtualFunction.h"

using namespace std;

int main() {

    A3 *a;

    B3 b;

    a = &b;

    a->display(); 

    return 0;

}