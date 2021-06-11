#include <iostream>
#include <fstream>

using namespace std;

class Positioning {

    public:
        void p() {
            string t;
            streampos data1, data2;
            fstream file("text.txt");
            data1 = file.tellp();
            file.seekp(5, ios::beg);
            data2 = file.tellp();
            while(getline(file,t)) {
                cout << t << endl;
            }
            file.close();

            cout << "Data1 = " << data1 << endl;
            cout << "Data2 = " << data2 << endl;
        }

};

int main() {

    Positioning p;
    p.p();

    return 0;

}