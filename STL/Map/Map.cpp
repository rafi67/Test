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
            
            for(auto const &x : m) {
                cout << x.first << ": " << x.second << endl;
            }
        }

};

int main() {

    M m;
    m.show();

}