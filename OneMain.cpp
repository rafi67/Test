#include "Template/Temp.h"

using namespace std;

int main() {

    Array<short, 2>a;
    a.insert(1);
    a.insert(2);
    cout << "First value is " << a.get(0) << endl;
    cout << "Second value is " << a.get(1) << endl;
    return 0;

}