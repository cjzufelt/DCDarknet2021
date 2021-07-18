#include "child.h"

void Child::childObfu(string& flag) {
    for (int i = 0; i < flag.length() - 1; i+=2) {
        char temp = flag[i];
        flag[i] = flag[i + 1];
        flag[i + 1] = temp;
    }
    
    Parent::parentObfu(flag);
}