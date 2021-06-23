#include <iostream>
#include "PrintMatches.h"

using namespace std;

int main() {

    string str12 = "Toshio Muramatsu";
    regex reg12 ("\\w{2,20}\\s\\w{2,20}");
    PrintMatches(str12, reg12);
    string str13 = "a as ape bug";
    regex reg13 ("a[a-z]+");
    PrintMatches(str13, reg13);
    

    return 0;

}