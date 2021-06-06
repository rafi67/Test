#include <iostream>
#include "DataAbstraction.h"

using namespace std;

int main() {

    
    Abstraction a;
    a.setX(24);
    a.setY(24);
    short sum = a.getX() + a.getY();
    cout << "Resutl = " << sum << endl;
    
    return 0;

}