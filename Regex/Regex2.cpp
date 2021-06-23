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

    string str7 = "F.B.I. I.R.S. CIA";
    regex reg7 ("([^ ]\..\..\.)");
    PrintMatches2(str7,reg7);
    regex reg8 ("\n");
    string str8 = "This is a\n multiline string\n"
            "the many lines";
    string noLBStr = regex_replace(str8, reg8, " ");
    cout << noLBStr << endl;

    return 0;

}