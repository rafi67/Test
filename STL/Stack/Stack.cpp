#include <iostream>
#include <stack>

using namespace std;

class St {

    public:
        void show() {
            stack<short>s;
            s.push(12);
            s.push(13);
            s.push(15);
            cout << "Elements of stack is: ";
            Iterator(s);
            cout << endl;
            cout << s.top() << endl;
        }

        void Iterator(stack<short>s1) {
            while(!s1.empty()) {
                cout << '\t' << s1.top();
                s1.pop();
            }
        }

};

int main() {

    St s;
    s.show();

    return 0;

}