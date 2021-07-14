#include <string>
#include <thread>
#include <iostream>
#include <mutex>

using std::string;
using std::thread;
using std::cout;
using std::ref;
using std::mutex;

string flag;
mutex _mutex;

// void one(char* flag) {
//     *flag = "abcd";
// }

// void two(char* flag) {
//     *(flag + 4) = "efgh";
// }

// void three(char* flag) {
//     *(flag + 8) = "ijkl";
// }

// void four(char* flag) {
//     *(flag + 12) = "mnop";
// }

// void five(char* flag) {
//     *(flag + 16) = '\0';
// }

void one() {
    _mutex.lock();
    flag += "abcd";
    _mutex.unlock();
}

void two() {
    _mutex.lock();
    flag += "efgh";
    _mutex.unlock();
}

void three() {
    _mutex.lock();
    flag += "ijkl";
    _mutex.unlock();
}

void four() {
    _mutex.lock();
    flag += "mnop";
    _mutex.unlock();
}

int main() {
    // string flag = "qS#Jz^Wf3!Tg5!8r";

    // string flag;

    // char* flag = new char[17];

    thread first (one);
    thread second (two);
    thread third (three);
    thread fourth (four);
    // thread fifth (five, flag);

    first.join();
    second.join();
    third.join();
    fourth.join();
    // fifth.join();

    // TODO: Add threads here


    cout << flag;

    // delete flag;

    return 0;
}