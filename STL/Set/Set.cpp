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

class S2 {

    public:
        void show() {
            set<short>s{60,20,30,40};
            s.emplace_hint(s.end(), 50);
            s.emplace_hint(s.begin(), 10);
            set<short>::iterator itr;
            for(itr=s.begin(); itr!=s.end(); itr++) {
                cout << *itr << ", ";
            }
            cout << endl;
        }

};

class S3 {

    public:
        void show() {
            set<short>s;
            s.insert(4);
            s.insert(1);
            s.insert(6);
            pair<set<short>::const_iterator, set<short>::const_iterator>ret;
            ret = s.equal_range(10);
            cout << "lower bound of 10 is " << *ret.first << endl;
            cout << "upper bound of 10 is " << *ret.second << endl;
        }

};

int main() {

    S3 s;
    s.show();

    return 0;

}