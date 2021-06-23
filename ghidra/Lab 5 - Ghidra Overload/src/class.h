#include <string>
#ifndef FLAGCLASS_H
#define FLAGCLASS_H

using std::string;

// TODO: Overload operators for this lab

class FlagClass {
  public:
    FlagClass();
    // void obfu();
    string getFlag();
    // void operator +=(string& lhs, string& rhs);
    // void operator -=(string& lhs, string& rhs);
    // void operator *=(string& lhs, string& rhs);
    // void operator /=(string& lhs, string& rhs);
    void operator +=(string s);
    void operator -=(string s);
    void operator *=(string s);
    void operator /=(string s);
  private:
    string flag;
};

#endif