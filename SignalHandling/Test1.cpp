#include <iostream>
#include <csignal>

using namespace std;

sig_atomic_t signalled = 0;

void handler(int sig) {
    signalled = 1;
}

int main() {

    signal(SIGINT, handler);
    raise(SIGINT);

    if(signalled)
        cout << "Signal handled" << endl;
    
    else 
        cout << "Signal not handled" << endl;
    
    return 0;

}