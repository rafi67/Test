#include <iostream>
#include <regex>
#include "PrintMatches.h"

using namespace std;

int main() {

    string str = "206-706-3100 202-456-1111 212-832-2000";
    regex reg (".{3}-(.{8})");
    PrintMatches(str, reg);

    return 0;

}