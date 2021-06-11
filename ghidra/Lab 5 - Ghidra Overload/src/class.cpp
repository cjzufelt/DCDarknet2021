#include "class.h"

using std::string;

FlagClass::FlagClass() {
    flag = "";
}

void FlagClass::obfu() {}

string FlagClass::getFlag() {
    return flag;
}