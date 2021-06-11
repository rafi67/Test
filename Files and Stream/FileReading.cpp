#include <iostream>
#include <fstream>

using namespace std;

class Read {

    public:
        void read() {
            string text;
            ifstream filestream("textout.txt");
            if(filestream.is_open()) {
                while(getline(filestream, text)) {
                cout << text << endl;
            }
            filestream.close();
            }

            else cout << "Unable to open the file" << endl;
            
        }

};

int main() {

    Read r;
    r.read();

    return 0;

}