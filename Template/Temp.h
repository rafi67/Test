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

template <typename X, typename Y>
void Print(X a, Y b) {
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
}
