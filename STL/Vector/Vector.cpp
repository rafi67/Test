#include <iostream>
#include <vector>

using namespace std;

class V1 {

    public:
        void show() {
            vector<string>v1;
            v1.push_back("C++ programming");
            v1.push_back("Hello");
            vector<string>::iterator itr;
            for(itr = v1.begin(); itr!=v1.end(); ++itr) {
                cout << *itr << endl;
            }
        }

};

int main() {

    V1 v;
    v.show();

    return 0;

}