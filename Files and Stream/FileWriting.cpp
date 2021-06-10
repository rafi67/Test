#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream filestream("textout.txt");

    filestream << "Welcome to C++ programming" << endl;
    filestream << "Hello" << endl;
    filestream.close();

    return 0;

}