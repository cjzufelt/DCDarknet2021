#include "class.h"

using std::string;

FlagClass::FlagClass() {
    flag = "vyfgdohs!D&Nmd6P";
}

void FlagClass::operator +=(string s) {
    for (int i = 0; i < s.length(); ++i) {
        char c = flag[i];

        for (int j = 0; j < norm(s[i]); ++j) {
            ++c;
            if (c > 0x7e) {
                c = 0x21;
            }
        }

        flag[i] = c;
    }
}

void FlagClass::operator -=(string s) {
    for (int i = 0; i < flag.length(); ++i) {
        char c = flag[i];
        
        for (int j = 0; j < norm(s[i]); ++j) {
            --c;
            if (c < 0x21) {
                c = 0x7e;
            }
        }
        
        flag[i] = c;
    }
}

void FlagClass::operator *=(string s) {
    for (int i = 0; i < flag.length() - 1; i+=2) {
        char temp = flag[i];
        flag[i] = flag[i + 1];
        flag[i + 1] = temp;
    }
}

void FlagClass::operator /=(string s) {
    string temp = flag;
    flag.clear();

    for (int i = temp.length() - 1; i >= 0 ; --i) {
        flag += temp[i];
    }
}


string FlagClass::getFlag() {
    return flag;
}

short FlagClass::norm(char c) {
    return c - 0x20;
}