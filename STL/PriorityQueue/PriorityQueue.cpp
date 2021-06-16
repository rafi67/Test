#include <iostream>
#include <queue>

using namespace std;

class PQ {

    public:
        void show() {
            priority_queue<short> p, q;
            p.push(1);
            p.push(2);
            p.push(3);
            p.push(4);
            q.push(5);
            q.push(6);
            q.push(7);
            q.push(8);
            q.push(9);
            p.swap(q);

            cout << "Elements of p is:" << endl;

            while(!p.empty()) {
                cout << p.top() << endl;
                p.pop();
            }

            cout << "Elements of q is:" << endl;

            while(!q.empty()) {
                cout << q.top() << endl;
                q.pop();
            }
        }

};

int main() {

    PQ pq;
    pq.show();

    return 0;

}