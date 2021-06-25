#include <string>
#ifndef FLAGCLASS_H
#define FLAGCLASS_H

using std::string;

// TODO: Overload operators for this lab

class FlagClass {
  public:
    FlagClass();
    string getFlag();
    void operator +=(string s);
    void operator -=(string s);
    void operator *=(string s);
    void operator /=(string s);
  private:
    short norm(char c);
    string flag;
};

#endif