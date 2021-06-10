#include <iostream>
#include <csignal>

using namespace std;

volatile sig_atomic_t signalled;

void handler(int sig) {
    signalled = sig;
}

int main() {

    signal(SIGFPE,handler);
    cout << "Before signal handled" << endl;
    cout << "Signal = " << signalled << endl;

    raise(SIGFPE);
    cout << "After signal handled" << endl;
    cout << "Signal = " << signalled << endl;

    return 0;

}