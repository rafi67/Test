#include "ExceptionHandling/Division.h"

using namespace std;

int main() {

    short i=25;
    short j=0;
    float k=0;

    try{
        k = division(i,j);
        cout << k << endl;
    }
    catch(const char*e) {
        cerr << e << endl;
    }

    return 0;

}