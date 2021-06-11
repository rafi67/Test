#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Read {

    public:
        void read(string filename) {
            string file;
            ifstream filestream(filename);
            while(getline(filestream,file)) {
                cout << file << endl;
            }
            filestream.close();
        }

};

class Write {

    public:
        void write() {
            char input[25];
            ofstream filestream("text.txt");
            cout << "Enter your name: ";
            cin.getline(input, 25);
            filestream << input << endl;
            cout << "Enter your age: ";
            cin >> input;
            cin.ignore();
            filestream << input << endl;
            filestream.close();
        }

};


int main() {

    Write w;
    Read r;
    w.write();
    r.read("text.txt");

}