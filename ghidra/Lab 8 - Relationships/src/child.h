#ifndef CHILD_H
#define CHILD_H

#include <string>
#include "parent.h"
#include "friend.h"

using std::string;

class Child: public Parent {
  private:
    friend class Friend;
    void childObfu(string& flag);
};

#endif