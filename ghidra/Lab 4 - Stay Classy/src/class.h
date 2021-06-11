#include <string>
#ifndef FLAGCLASS_H
#define FLAGCLASS_H

using std::string;

class FlagClass {
  public:
    FlagClass();
    void obfu();
    // string getFlag();
  private:
    string flag;
};

#endif