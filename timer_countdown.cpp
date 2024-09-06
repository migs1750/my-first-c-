#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void countdown(int time_sec) {
    while (time_sec >= 0) {
        cout << time_sec / 60 << ":" << (time_sec % 60 < 10 ? "0" : "") << time_sec % 60 << "\r";
        cout.flush();
        this_thread::sleep_for(chrono::seconds(1));
        --time_sec;
    }
    cout << "miss ko na sya boss" << std::endl;
}

int main() {
    countdown(7);
    return 0;
}