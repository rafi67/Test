#include <iostream>
#include <list>

using namespace std;

class L {

    public:
        void show() {
            list<string>l;
            l.push_back("Rafi");
            l.push_back("C++ programming");
            list<string>::iterator itr;
            for(itr=l.begin(); itr!=l.end(); itr++) {
                cout << *itr << endl;
            }
        }

};

int main() {

    L l;
    l.show();

    return 0;

}