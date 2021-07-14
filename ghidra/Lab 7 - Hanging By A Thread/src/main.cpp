#include <string>
#include <thread>
#include <iostream>
#include <mutex>

using std::string;
using std::thread;
using std::cout;
using std::mutex;


string flag;
mutex _mutex;

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
    // TODO: Schedule the threads to run in a certain order. Currently, they run randomly
    // (obviously, the typically run in order, but not always)
    // string flag = "qS#Jz^Wf3!Tg5!8r";

    thread first (one);
    thread second (two);
    thread third (three);
    thread fourth (four);

    first.join();
    second.join();
    third.join();
    fourth.join();

    cout << flag;

    return 0;
}