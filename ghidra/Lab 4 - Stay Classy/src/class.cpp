#include "class.h"

using std::string;

FlagClass::FlagClass() {
    flag = "y2SU$I:CN5E#&KVu";
}

void FlagClass::obfu() {
    string temp = flag;
    flag.clear();
    
    for (int i = temp.length() - 1; i >= 0; --i) {
        char c = temp.at(i);
        if (i % 2) {
            c++;
        }
        else {
            c--;
        }

        flag += c;
    }
}

// string FlagClass::getFlag() {
//     return flag;
// }