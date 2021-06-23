#include <iostream>
#include "PrintMatches.h"
#include "Result.h"

using namespace std;

int main() {

    string email;
    cout << "Enter a valid email address: ";
    cin >> email;
    //string s = "db@aol.com m@.com @apple.com db@.com";
    regex r ("[\\w._%+-]{0,100}[@]{1}[\\w]{0,100}[.]{1}[\\w]{0,10}.[\\w]{0,10}");
    if(isValid(email, r)) PrintMatches(email, r);

    else cout << "Your email is not valid try again...." << endl;
    
    return 0;

}