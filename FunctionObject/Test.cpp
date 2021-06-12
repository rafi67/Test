#include <iostream>

using namespace std;

class function_object {

    public:
        int operator()(int a, int b) {
            return a+b;
        }

};

int main() {

    function_object f;
    int result = f(5,5);

    cout << "Result = " << result << endl;

    return 0;

}