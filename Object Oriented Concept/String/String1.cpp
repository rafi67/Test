#include <iostream>
#include <cstring>

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

        void test2() {
            char key[] = "mango";
            char buffer[50];
            do {
                cout << "What is your favourite fruit?" << endl;
                cin >> buffer;
            }
            while(strcmp(key, buffer)!=0);

            cout << "Answer is correct!!" << endl;
        }

};