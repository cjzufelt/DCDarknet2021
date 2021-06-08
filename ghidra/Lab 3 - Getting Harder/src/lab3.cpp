#include <iostream>
#include <string>

using namespace std;

void obfu(string& flag) {
    for (int i = 0; i < flag.length(); i++) {
        for (int j = 0; j < 13; j++) {
            if (flag.at(i) < 0x7e) {
                flag.at(i)++;
            }
            else {
                flag.at(i) = 0x21;
            }
        }
    }
}

int main() {
    string flag = ",&Xe[)I:vvLt&C>F";

    obfu(flag);

    return 0;
}