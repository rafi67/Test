#include <iostream>

using namespace std;

class Test {

    public:
        void test1(short i) {
            cout << "The short is " << i << endl;
        }

        void test1(float f) {
            cout << "The float is " << f << endl;
        }

        void test1(char const *ch) {
            cout << "The char* is " << ch << endl;
        } 

};