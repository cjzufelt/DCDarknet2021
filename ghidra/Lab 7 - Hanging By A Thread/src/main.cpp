#include <string>
#include <thread>
#include <mutex>

using std::string;
using std::thread;
using std::mutex;


string flag;
mutex mutex1;
mutex mutex2;
mutex mutex3;

void one() {
    flag += "qS#J";
    mutex1.unlock();
}

void two() {
    mutex2.lock();
    flag += "3!Tg";
    mutex3.unlock();
}

void three() {
    mutex1.lock();
    flag += "z^Wf";
    mutex2.unlock();
}

void four() {
    mutex3.lock();
    flag += "5!8r";
}

int main() {
    mutex1.lock();
    mutex2.lock();
    mutex3.lock();

    thread first (one);
    thread second (two);
    thread third (three);
    thread fourth (four);

    first.join();
    second.join();
    third.join();
    fourth.join();

    return 0;
}