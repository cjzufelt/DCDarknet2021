#include "parent.h"

void Parent::parentObfu(string& flag) {
    string temp = flag;
    flag.clear();

    for (int i = temp.length() - 1; i >= 0 ; --i) {
        flag += temp[i];
    }
}