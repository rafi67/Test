#include <iostream>
#include "Abstract.cpp"

using namespace std;

int main() {

    
    Shape *s;

    Rectangle r;
    Triangle t;

    s = &r;
    s->draw();

    s = &t;
    s->draw();
    
    return 0;

}