#include <iostream>

using namespace std;

class String1 {

    public:
        void test1() {
            string s1 = "Hello";
            string convert;
            char ch[] = {'C', '+', '+'};
            string s2 = string(ch);
            cout << s1 << endl;
            cout << s2 << endl;
        }

};