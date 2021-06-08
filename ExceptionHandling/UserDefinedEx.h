#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception {

    public:
        virtual const char* what() const throw() {
            return "Attempted to divide by zero";
        }

};

void Function() {
    try{
        short x, y;
        cout << "Enter two number:" << endl;
        cin >> x >> y;
        if(y==0) {
            MyException z;
            throw z;
        } 
        else {
            cout << "Result = " << x/y << endl;
        }
    }
    catch(exception& e){
        cout << e.what() << endl;
    }
}