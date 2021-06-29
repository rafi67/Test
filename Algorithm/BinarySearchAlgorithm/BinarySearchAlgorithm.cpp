#include <iostream>

using namespace std;

short b_s_al(short a[], short n, short x) {

    short i, left = 0, right = n-1, mid;

    for(i=0; i<n; i++) {
        mid = (left+right)/2;
        if(a[mid]==x) {
            return mid;
        }
        else if(a[mid]<x) left = mid+1;
        else if(a[mid]>x) right = mid-1; 
    }

    return -1;

}

int main() {

    short n;
    short a[5];
    short input;

    cout << "Enter the size of element: ";
    cin >> n;
    
    cout << "Enter " << n << " elements: " << endl;
    for(short i=0; i<n; i++) {
        cin >> a[i];
    }
    cout << "Enter number to search: ";
    cin >> input;
    short result = b_s_al(a, n, input);
    if(result!=-1) cout << "Match found " << a[result] << endl;
    else cout << "Match not found" << endl;    

    return 0;

}