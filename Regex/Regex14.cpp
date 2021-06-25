#include <iostream>
#include <regex>
#include "PrintMatches.h"

using namespace std;

int main() {

    string str = " one two three four ";
    regex reg ("(\\w+(?=\\b))");
    PrintMatches(str, reg);
    string str2 = "1. Dog 2. Cat 3. Turtle";
    regex reg2 ("\\d\\.\\s(Dog|Cat)");
    PrintMatches(str2, reg2);

    return 0;

}