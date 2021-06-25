#include <iostream>
#include <regex>
#include "PrintMatches.h"

using namespace std;

int main() {

    string str = "14125551212 4125551212 "
        "(412)5551212 412 555 1212 412-555-1212 "
        "1-412-555-1212";
    regex reg ("((1?)(-| ?)(\\()?(\\d{3})(\\)|-| |\\))?(\\d{3})(-| )?(\\d{4}|\\d{4}))");
    PrintMatches(str, reg);

    return 0;

}