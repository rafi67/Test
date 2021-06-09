#include "Template/Temp.h"

using namespace std;

int main() {

    ArrayList <int> a;
    for(short i=1; i < 18; i++) {
        a.set(i);
    }

    for(short i = 0; i < 17; i++) {
        cout << a.get(i) << endl;
    }

    return 0;

}