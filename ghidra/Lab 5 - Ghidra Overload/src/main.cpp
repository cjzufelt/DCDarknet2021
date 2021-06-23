#include "class.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
    FlagClass flagClass = FlagClass();

    // flagClass.obfu();

    flagClass += "aaaaaaaaaaaaaaaa";
    cout << "Finished add" << endl;
    cout << flagClass.getFlag() << endl;
    flagClass -= "aaaaaaaaaaaaaaaa";
    cout << "Finished sub" << endl;
    cout << flagClass.getFlag() << endl;
    flagClass /= "test_div";
    cout << "Finished div" << endl;
    flagClass *= "test_mult";

    cout << flagClass.getFlag();

    return 0;
}