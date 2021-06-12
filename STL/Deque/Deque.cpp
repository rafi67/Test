#include <iostream>
#include <deque>

using namespace std;

class D {

    public:
        void show() {
            deque<string>d1;
            d1.push_back("Rafi");
            d1.push_back("C++ programming");

            deque<string>::iterator itr;
            for(itr=d1.begin(); itr!=d1.end();itr++) {
                cout << *itr << endl;
            }

            for(short i=0; i<d1.size(); i++){
                cout << d1[i] << endl;
            }
        }

};

int main() {

    D d;
    d.show();

    return 0;

}