#include <iostream>

using namespace std;

short b_s_al(short a[], short n, short x) {

    short i, left = 0, right = n-1, mid;

    while(left<=right) {
        mid = (left+right)/2;
        if(a[mid]==x) {
            return mid;
        }
        if(a[mid]<x) left = mid+1;
        else right = mid-1; 
    }

    return -1;

}

int main() {

    short n;
    short input;

    cout << "Enter the size of element: ";
    cin >> n;
    short a[n];
    
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