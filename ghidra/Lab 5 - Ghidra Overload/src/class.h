#include <string>
#ifndef FLAGCLASS_H
#define FLAGCLASS_H

using std::string;

// TODO: Overload operators for this lab

class FlagClass {
  public:
    FlagClass();
    void obfu();
    string getFlag();
  private:
    string flag;
};

#endif