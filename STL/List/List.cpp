#include <iostream>
#include <list>

using namespace std;

class L {

    public:
        void show() {
            list<string>l;
            l.push_back("Rafi");
            l.push_back("C++ programming");
            cout << l.front() << endl;
            cout << l.back() << endl;
        }

};

int main() {

    L l;
    l.show();

    return 0;

}