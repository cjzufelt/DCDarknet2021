#include "class.h"
#include <cstdlib>

using std::string;
using std::abs;

FlagClass::FlagClass() {
    flag = "vyfgdohs!D&Nmd6P";
}

void FlagClass::obfu() {
    flag += "test_add";
    flag -= "test_subt";
    flag /= "test_div";
    flag *= "test_mult";
}

void FlagClass::operator +=(string& lhs, string& rhs) {
    // For every character in s, add its value to the character at that index in flag
    for (int i = 0; i < rhs.length(); ++i) {
        char c = (lhs[i] + rhs[i]) % 0x7e;
        if (c < 0x21) {
            c += 0x21;
        }
        lhs[i] = c;
    }
}

void operator -=(string& lhs, string& rhs) {
    // For every character in s, substract its value from the character at that index in flag
    for (int i = 0; i < s.length(); ++i) {
        char c = abs(lhs[i] - rhs[i]);
        if (c < 0x21) {
            c = 0x7e - c;
        }
        lhs[i] = c;
    }
}

void operator *=(string& lhs, string& rhs) {
    // Transpose pairs of characters in the flag. The string parameter is a red herring.
    for (int i = 0; i < lhs.length(); i+=2) {
        char temp = lhs[i];
        lhs[i] = lhs[i + 1];
        lhs[i + 1] = temp;
    }
}

void operator /=(string& lhs, string& rhs) {
    // Reverse the flag. The string parameter is a red herring.
    string temp = lhs;
    lhs.clear();

    for (int i = temp.length() - 1; i <= 0 ; --i) {
        lhs += temp[i];
    }
}

string FlagClass::getFlag() {
    return flag;
}