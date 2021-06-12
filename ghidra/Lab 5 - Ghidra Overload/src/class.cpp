#include "class.h"
#include <cstdlib>

using std::string;
using std::abs;

FlagClass::FlagClass() {
    flag = "";
}

void FlagClass::obfu() {
    
}

void FlagClass::operator += (string s) {
    // For every character in s, add its value to the character at that index in flag
    for (int i = 0; i < s.length(); ++i) {
        char c = (flag[i] + s[i]) % 0x7e;
        if (c < 0x21) {
            c += 0x21;
        }
        flag[i] = c;
    }
}

void operator -=(string s) {
    // For every character in s, substract its value from the character at that index in flag
    for (int i = 0; i < s.length(); ++i) {
        char c = abs(flag[i] - s[i]);
        if (c < 0x21) {
            c = 0x7e - c;
        }
        flag[i] = c;
    }
}

void operator *=(string s) {
    
    return;
}

void operator /=(string s) {
    return;
}

string FlagClass::getFlag() {
    return flag;
}