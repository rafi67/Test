#include <iostream>
#include <fstream>

using namespace std;

class WriteRead {

    public:
        void writeread() {
            fstream filestream("text.txt");
            string text;
            cout << "Enter your name: ";
            getline(cin, text);
            filestream << text << endl;
            cout << "Enter your age: ";
            cin >> text;
            filestream << text << endl;
            filestream.close();

            filestream.open("text.txt");
            while(getline(filestream,text)) {
                cout << text << endl;
            }

            filestream.close();
        }

};


int main() {

    WriteRead wr;
    wr.writeread();

    return 0;

}