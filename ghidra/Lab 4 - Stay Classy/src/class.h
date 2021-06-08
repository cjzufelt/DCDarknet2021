#include <string>
#ifndef FLAGCLASS_H
#define FLAGCLASS_H

class FlagClass {
  public:
    void obfu();
    void setFlag(string flag);
  private:
    string flag;
}

#endif