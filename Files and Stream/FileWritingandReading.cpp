#include <iostream>
#include <fstream>

using namespace std;

class Read {

    public:
        void read(string filename) {
            string file;
            fstream filestream(filename);
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
            fstream filestream("text.txt");
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