#include <iostream>

using namespace std;

short l_s_al(short a[], short n, short x) {
    short i;
    for(i=0; i<n; i++) {
        if(a[i]==x) return i;
    }

    return -1;
}

int main() {

    short a[5] = {1, 23, 44, 55, 60};
    short input;
    cout << "Enter a value for search: ";
    cin >> input;
    short ls = l_s_al(a, 5, input);
    if(ls!=-1) cout << "Match found " << a[ls] << endl;
    else cout << "Match not found" << endl;

    return 0;

}