#include <iostream>
#include <regex>

using namespace std;

int main() {

    string str11 = "My number is 904-285-3700";
    regex reg11 ("(.{3})-(.*)-(.*)");
    smatch matches;
    if(regex_search(str11, matches, reg11)) {
        for(short i=1; i<matches.size(); i++) {
            cout << matches[i] << endl;
        }
    }

    return 0;

}