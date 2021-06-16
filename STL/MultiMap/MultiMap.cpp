#include <iostream>
#include <map>

using namespace std;

class MM {

    public:
        void show() {
            multimap<short,string>mm;
            mm = {{1,"Rafi"}, {2, "Shafil"}};
            multimap<short,string>::iterator itr;
            for(itr=mm.begin(); itr!=mm.end(); ++itr) {
                cout << (*itr).first << ": " << (*itr).second << endl;
            }
        }

};

int main() {

    MM m;
    m.show();

}