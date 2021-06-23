#include <iostream>
#include <regex>

using namespace std;

void PrintMatches(string str, regex reg) {
    smatch matches;
    cout << boolalpha;
    while(regex_search(str, matches, reg)) {
        cout << "Is there any matches: " << matches.ready() << endl;
        cout << "There is no match: " << matches.empty() << endl;
        cout << "Number of match: " << matches.size() << endl;
        cout << matches.str(1) << endl;
        str = matches.suffix().str();
        cout << endl;
    }
}

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

    string str = "The ape was at the apex";
    regex reg("(ape[^ ]?)");
    string str2 = "I picked the pickle";
    regex reg2("(pick([^ ]+)?)");
    string str3 = "Cat rat mat fat pat";
    regex reg3("([crmfp]at)");
    regex reg4("([C-Fc-f]at)");
    regex reg5("([^Cr]at)");
    PrintMatches(str,reg);
    PrintMatches2(str2,reg2);
    PrintMatches2(str3,reg3);
    PrintMatches2(str3,reg4);
    PrintMatches2(str3,reg5);
    string str6 = "Cat rat mat fat pat";
    regex reg6 ("([Cr]at)");
    string owlFood = regex_replace(str6,reg6, "Owl");
    cout << owlFood << endl;

    return 0;

}