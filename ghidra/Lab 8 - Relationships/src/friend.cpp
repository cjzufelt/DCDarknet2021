#include "friend.h"

Friend::Friend() {
    this->flag = "e4Zkfgh#ar3@dW2h";
}

void Friend::friendObfu(Child child) {    
    for (int i = 0; i < flag.length(); ++i) {
        if ((flag[i] >= 0x41) && (flag[i] <= 0x5a)) {
            flag[i] += 0x20;
        }
        else if ((flag[i] >= 0x61) && (flag[i] <= 0x7a)) {
            flag[i] -= 0x20;
        }
    }

    child.childObfu(flag);
}