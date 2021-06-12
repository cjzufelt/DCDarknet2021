#include "class.h"
#include <iostream>

using std::cout;

int main() {
    FlagClass flagClass = FlagClass();

    flagClass.obfu();

    cout << flagClass.getFlag();

    return 0;
}