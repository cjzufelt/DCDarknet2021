#include <string>
#include "child.h"

using std::string;

int main() {
    Child child;
    Parent parent;
    Friend aFriend;

    aFriend.friendObfu(child);

    return 0;
}