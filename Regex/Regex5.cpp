#include <iostream>
#include "PrintMatches.h"

using namespace std;

int main() {

    string email;
    cout << "Enter a valid email address: ";
    cin >> email;
    //string s = "db@aol.com m@.com @apple.com db@.com";
    regex r ("[\\w._+%+-]{0,100}[@]{1}[\\w]{0,20}.[\\w]{2,3}");
    PrintMatches(email, r);
    
    return 0;

}