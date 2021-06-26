#ifndef CHILD_H
#define CHILD_H

#include <string>

#include "parent.h"
#include "friend.h"

using std::string;

class Child : public Parent {
    Child(): Parent();
    friend class aFriend;
    string getFlag();
};

#endif