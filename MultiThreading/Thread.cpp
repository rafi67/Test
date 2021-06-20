#include <iostream>
#include <thread>

using namespace std;

static bool s_finished = false;

void work() {
    using namespace literals::chrono_literals;
    cout << "Thread started id = " << this_thread::get_id() << endl;
    while(!s_finished) {
        cout << "Working..." << endl;
        this_thread::sleep_for(1s);
    }
}

int main() {

    thread t1(work);
    cin.get();
    s_finished = true;
    t1.join();
    cout << "Finished" << endl;
    cout << "Thread started id = " << this_thread::get_id() << endl;
    cin.get();

    return 0;

}
