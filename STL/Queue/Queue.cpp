#include <iostream>
#include <queue>

using namespace std;

class Q {

    public:
        void show() {
            queue<short>q;
            q.emplace(1);
            q.emplace(2);
            q.emplace(3);
            Iterator(q);
        }

        void Iterator(queue<short>q1) {
            while(!q1.empty()) {
                cout << "\t" << q1.front();
                q1.pop();
            }
            cout << endl;
        }

};

int main() {

    Q q;
    q.show();

}