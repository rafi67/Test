#include <iostream>
#include <regex>
#include "PrintMatches.h"

using namespace std;

int main() {

    string str = "The cat cat fell out the window";
    regex reg ("(\\b\\w+)\\s+\\1");
    PrintMatches(str, reg);
    string str2 = "<a href='#'><b>The Link</b></a>";
    regex reg2 ("<b>(.*?)</b>");
    string result;
    regex_replace(back_inserter(result), str2.begin(), str2.end(), reg2, "$1");
    cout << result << endl;
    string str3 = "<name>Life on Mars</name>"
        "<name>Freaks and Geaks</name>";
    regex reg3 ("<name>(.*?)</name>");
    string result2;
    regex_replace(back_inserter(result2), str3.begin(), str3.end(), reg3, "$1");
    cout << result2 << endl;

    return 0;

}