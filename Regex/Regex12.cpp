#include <iostream>
#include <regex>
#include "PrintMatches.h"

using namespace std;

int main() {
    
    string str = "412-555-1212";
    regex reg ("([\\d]{3})-([\\d]{3}-[\\d]{4})");
    string result;
    regex_replace(back_inserter(result), str.begin(), str.end(), reg, "($1)$2");
    cout << result << endl;

    return 0;

}