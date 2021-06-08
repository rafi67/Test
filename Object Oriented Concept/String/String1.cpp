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

        void length() {
            char arra[] = "Computer Technology";
            cout << "Length of array is " << strlen(arra);
        }

        void substring() {
            string name = "Rafi";
            cout << "Before using substring function Name = " << name << endl;
            string name2 = name.substr(1,2);
            cout << "After using substring function Name = " << name2 << endl;
        }

        void find() {
            string n = "Rafi";
            cout << "Enter string to find: ";
            string n2;
            cin >> n2;
            int len = n.length();
            for(int i=0; i<len; i++){
                int n1 = n.find(n2, i);
                if(n1 !=-1){
                    cout<< "String " << n2 << " found" << endl;
                    break;
                }
                else{
                    cout << "String" << n2 << " not found" << endl;
                    break;
                }
            }
        }

};