#include <string>
#include <thread>
#include <iostream>

using std::string;
using std::thread;
using std::cout;
using std::ref;

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

void one(string& flag) {
    flag += "abcd";
}

void two(string& flag) {
    flag += "efgh";
}

void three(string& flag) {
    flag += "ijkl";
}

void four(string& flag) {
    flag += "mnop";
}

int main() {
    // string flag = "qS#Jz^Wf3!Tg5!8r";

    string flag;

    // char* flag = new char[17];

    thread first (one, ref(flag));
    thread second (two, ref(flag));
    thread third (three, ref(flag));
    thread fourth (four, ref(flag));
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