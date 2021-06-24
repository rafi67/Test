#include <iostream>
#include <regex>

using namespace std;

int main() {

    string str = "https://www.youtube.com "
        "https://www.google.com";
    regex reg ("(https://([\\w.]+))");
    string result;
    regex_replace(back_inserter(result), str.begin(), str.end(), reg, "<a href='$1'>$2</a>\n");
    cout << result << endl;

    return 0;

}