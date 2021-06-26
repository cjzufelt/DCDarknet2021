#include "friend.h"
#include "child.h"

using std::string;

string Friend::getFlag() {
    Child child;
    return child.getFlag();
}