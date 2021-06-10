#include <iostream>
#include <csignal>

using namespace std;

volatile sig_atomic_t signalled;

void handler(int sig) {
    signalled = sig;
}

int main() {

    signal(SIGINT,handler);
    cout << "Value of signal is " << signalled << endl;
    cout << "Sending signal " << SIGINT << endl;

    raise(SIGINT);
    cout << "Value of signal is " << signalled << endl;

    return 0;

}