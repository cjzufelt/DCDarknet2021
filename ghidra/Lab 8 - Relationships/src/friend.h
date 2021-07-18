#ifndef FRIEND_H
#define FRIEND_H

#include <string>
#include "child.h"

using std::string;

class Child;

class Friend {
  public:
    Friend();
    string flag;
    void friendObfu(Child child);
};

#endif