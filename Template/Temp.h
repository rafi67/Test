#include <iostream>

using namespace std;

template <typename T>
void Print(T value) {
    cout << value << endl;
}


template <typename T>
T add(T a, T b) {
    return a+b;
}
