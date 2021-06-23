#include "class.h"
#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;

using std::string;
using std::abs;

FlagClass::FlagClass() {
    flag = "vyfgdohs!D&Nmd6P";
}

// void FlagClass::obfu() {
//     flag += "test_add";
//     flag -= "test_subt";
//     flag /= "test_div";
//     flag *= "test_mult";
// }

// void FlagClass::operator +=(string& lhs, string& rhs) {
//     // For every character in s, add its value to the character at that index in flag
//     for (int i = 0; i < rhs.length(); ++i) {
//         char c = (lhs[i] + rhs[i]) % 0x7e;
//         if (c < 0x21) {
//             c += 0x21;
//         }
//         lhs[i] = c;
//     }
// }

// void operator -=(string& lhs, string& rhs) {
//     // For every character in s, substract its value from the character at that index in flag
//     for (int i = 0; i < lhs.length(); ++i) {
//         char c = lhs[i];
//         for (int j = 0; j < int(rhs[i]); ++j) {
//             --c;
//             if (c < 0x21) {
//                 c = 0x7e;
//             }
//         }
//         lhs[i] = c;
//     }
// }

// void operator *=(string& lhs, string& rhs) {
//     // Transpose pairs of characters in the flag. The string parameter is a red herring.
//     for (int i = 0; i < lhs.length() - 1; i+=2) {
//         char temp = lhs[i];
//         lhs[i] = lhs[i + 1];
//         lhs[i + 1] = temp;
//     }
// }

// void operator /=(string& lhs, string& rhs) {
//     // Reverse the flag. The string parameter is a red herring.
//     string temp = lhs;
//     lhs.clear();

//     for (int i = temp.length() - 1; i <= 0 ; --i) {
//         lhs += temp[i];
//     }
// }


void FlagClass::operator +=(string s) {
    // For every character in s, add its value to the character at that index in flag
    for (int i = 0; i < s.length(); ++i) {
        char c = (flag[i] + (s[i] - 0x20)) % 0x7e;
        if (c < 0x21) {
            c += 0x21;
        }
        cout << flag[i] << " (" << (int)flag[i] - 0x20 << ") + " << s[i] << " (" << (int)s[i] - 0x20 << ") = " << c << " (" << (int)c - 0x20 << ")" << endl;
        flag[i] = c;
    }
}

void FlagClass::operator -=(string s) {
    // For every character in s, substract its value from the character at that index in flag
    for (int i = 0; i < flag.length(); ++i) {
        char c = flag[i];
        
        for (int j = 0; j < s[i] - 0x20; ++j) {
            --c;
            if (c < 0x21) {
                c = 0x7e;
            }
        }
        c += 0x20;
        
        cout << flag[i] << " (" << (int)flag[i] - 0x20 << ") - " << s[i] << " (" << (int)s[i] - 0x20 << ") = " << c << " (" << (int)c - 0x20 << ")" << endl;
        flag[i] = c;
    }
}

void FlagClass::operator *=(string s) {
    // Transpose pairs of characters in the flag.
    for (int i = 0; i < flag.length() - 1; i+=2) {
        char temp = flag[i];
        flag[i] = flag[i + 1];
        flag[i + 1] = temp;
    }
}

void FlagClass::operator /=(string s) {
    // Reverse the flag.
    string temp = flag;
    flag.clear();

    for (int i = temp.length() - 1; i >= 0 ; --i) {
        flag += temp[i];
    }
}


string FlagClass::getFlag() {
    return flag;
}