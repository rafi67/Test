#include <iostream>
#include <regex>

using namespace std;

bool isValid(string email, regex reg) {
    smatch matches;
    string e;
    sregex_iterator currentMatches(email.begin(), email.end(), reg);
    sregex_iterator lastMatches;
    while(currentMatches!=lastMatches) {
        matches = *currentMatches;
        e = matches.str();
        currentMatches++;
    }
    if(e=="") return 0;
    else return 1;
}