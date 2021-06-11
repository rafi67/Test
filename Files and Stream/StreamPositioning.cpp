#include<iostream>
#include <fstream>

using namespace std;

class Position {

    public:
        void po() {
            string text;
            fstream file("text.txt");
            streampos data1, data2;
            data1 = file.tellg();
            file.seekg(5, ios::beg);
            data2 = file.tellg();
            while(getline(file,text)) {
                cout << text << endl;
            }
            cout << "data1 = " << data1 << endl;
            cout << "data2 = " << data2 << endl;
            file.close();
        }

};

int main() {

    Position p;
    p.po();

    return 0;

}