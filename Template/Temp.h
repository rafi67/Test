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


template <typename T, short size>
class Array{

    private:
        T arra[size];
        short i = 0;

    public:
        void insert(T value) {
            arra[i] = value;
            i++;
        }

        T get(short index) {
            return arra[index];
        }

};

template <typename T>
class ArrayList {

    private:
        short i = 16, j = 0;
         T *ptr; 

    public:
        ArrayList() {
            ptr = new T[i];
        }
        ~ArrayList() {
            delete ptr;
        }

        void set(T value) {
            ptr[j] = value;
            j++;
            if(j>15) {
                memoryAllocator();
            }
        }

        T get(short index) {
            return ptr[index];
        }

        void memoryAllocator() {
            i+=2;
        }

};