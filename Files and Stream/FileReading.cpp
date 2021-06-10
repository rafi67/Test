#include <iostream>
#include <fstream>

using namespace std;

class Read {

    public:
        void read() {
            string text;
            ifstream filestream("textout.txt");
            while(getline(filestream, text)) {
                cout << text << endl;
            }
            filestream.close();
        }

};

int main() {

    Read r;
    r.read();

    return 0;

}