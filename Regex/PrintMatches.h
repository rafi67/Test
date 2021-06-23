#include <iostream>
#include <regex>

using namespace std;

void PrintMatches(string str, regex reg) {
    sregex_iterator currentMatches(str.begin(), str.end(), reg);
    sregex_iterator lastMatches;
    while(currentMatches!=lastMatches) {
        smatch matches = *currentMatches;
        cout << matches.str() << endl;
        currentMatches++;
    }
    cout << endl;
}