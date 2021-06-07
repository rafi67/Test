#include <iostream>
#include <cstring>

using namespace std;

class String1 {

    public:
        void convertion() {
            string s1 = "Hello";
            string convert;
            char ch[] = {'C', '+', '+'};
            string s2 = string(ch);
            cout << s1 << endl;
            cout << s2 << endl;
        }

        void compare() {
            char key[] = "mango";
            char buffer[50];
            do {
                cout << "What is your favourite fruit?" << endl;
                cin >> buffer;
            }
            while(strcmp(key, buffer)!=0);

            cout << "Answer is correct!!" << endl;
        }

        void concatenation() {
            char key[25], buffer[25];
            cout << "Enter key string: ";
            cin.getline(key, 25);
            cout << "Enter buffer string: ";
            cin.getline(buffer, 25);
            strcat(key, buffer);
            cout << "Key = " << key << endl;
            cout << "Buffer = " << buffer << endl;
        }

        void copy() {
            char key[25], buffer[25];
            cout << "Enter key String: ";
            cin.getline(key, 25);
            strcpy(buffer, key);
            cout << "Key = " << key << endl;
            cout << "Buffer = " << buffer << endl;
        }

};