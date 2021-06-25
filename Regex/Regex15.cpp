#include <iostream>
#include <regex>
#include "PrintMatches.h"

using namespace std;

int main() {

    string str = "12345 12345-1234 1234 123456-333";
    regex reg ("(\\d{5}-\\d{4}|\\d{5}\\s)");
    PrintMatches(str, reg);

    return 0;

}