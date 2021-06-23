#include <iostream>
#include <regex>

using namespace std;

int main() {

    string str3 = "Just some words\n"
            "and some more\r\n"
            "and more\n";
    
    regex reg3 ("[\r]?\n");

    string str4 = regex_replace(str3, reg3, " ");
    cout << str4 << endl;

    return 0;

}