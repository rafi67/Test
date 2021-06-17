#include <iostream>
#include <map>

using namespace std;

class M {

    public:
        void show() {
            map<short,string>m;
            map<short,string>::iterator itr1;
            map<short,string>::reverse_iterator itr2;
            m[1] = "Rafi";
            m[2] = "Arif";
            m[3] = "Shafil";

            cout << "Natural Order:" << endl;
            
            for(itr1=m.begin(); itr1!=m.end(); itr1++) {
                cout << (*itr1).first << ": " << (*itr1).second << endl;
            }
            
            cout << "Reverse Order:" << endl;

            for(itr2=m.rbegin(); itr2!=m.rend(); itr2++) {
                cout << (*itr2).first << ": " << (*itr2).second << endl;
            }
        }

};

int main() {

    M m;
    m.show();

}