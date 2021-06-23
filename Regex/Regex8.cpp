#include <iostream>
#include <regex>
#include "PrintMatches.h"

using namespace std;

int main() {

    string str4 = "ape at the apex";
    regex reg4  ("(\\bape\\b)");
    string str5 = "Match everything up to @";
    regex reg5 ("(^.*[^@])");
    string str6 = "@ Get this string";
    regex reg6 ("([^@\\s].*$)");

    PrintMatches(str4, reg4);
    PrintMatches(str5, reg5);
    PrintMatches(str6, reg6);

    return 0;

}