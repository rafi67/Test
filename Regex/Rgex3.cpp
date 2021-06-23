#include <iostream>
#include <regex>

using namespace std;

void PrintMatches2(string str, regex reg) {
    sregex_iterator currentMatches(str.begin(), str.end(), reg);
    sregex_iterator lastMatches;
    while(currentMatches!=lastMatches) {
        smatch matches = *currentMatches;
        cout << matches.str() << endl;
        currentMatches++;
    }
    cout << endl;
}

int main() {

    string str9  = "12345";
    regex reg9 ("\\d");
    PrintMatches2(str9, reg9);
    string str10 = "123 12345 123456 1234567";
    regex reg10 ("\\d{5,7}");
    PrintMatches2(str10, reg10);
    string str11 = "412-867-5309";
    regex reg11 ("\\w{3}-\\w{3}-\\w{4}");
    PrintMatches2(str11, reg11);

    return 0;

}