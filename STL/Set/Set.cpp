#include <iostream>
#include <set>

using namespace std;

class S {
    
    public:
        void show() {
            set<short>s;
            s.insert(10);
            s.insert(20);
            s.insert(30);
            s.insert(40);
            s.insert(50);
            s.insert(60);
            set<short>::iterator itr;
            for(itr=s.begin(); itr!=s.end(); itr++) {
                cout << *itr << endl;
            }
        }

};

int main() {

    S s;
    s.show();

    return 0;

}