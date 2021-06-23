#include <iostream>
#include <regex>
#include "PrintMatches.h"

using namespace std;

int main() {

    string str1 = "cat cats";
    regex reg1 ("([cat]+s?)");
    PrintMatches(str1, reg1);
    string str2 = "doctor doctors doctor's";
    regex reg2 ("([doctor]+['s]*)");
    regex reg3 ("([doctor]+['s]{0,2})");
    PrintMatches(str2, reg2);

    return 0;

}