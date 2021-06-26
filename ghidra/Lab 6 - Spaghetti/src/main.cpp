#include <string>

using std::string;


#include <iostream>
using std::cout;

string reverse(string flag) {
    string temp = flag;
    flag.clear();

    for (int i = temp.length() - 1; i >= 0 ; --i) {
        flag += temp[i];
    }

    return flag;
}

string rot(string flag, int rot_val) {
    for (int i = 0; i < flag.length(); i++) {
        for (int j = 0; j < rot_val; j++) {
            if (flag.at(i) < 0x7e) {
                flag.at(i)++;
            }
            else {
                flag.at(i) = 0x21;
            }
        }
    }

    return flag;
}

string swapperoo(string flag) {
    for (int i = 0; i < flag.length() - 1; i+=2) {
        char temp = flag[i];
        flag[i] = flag[i + 1];
        flag[i + 1] = temp;
    }

    return flag;
}

string atoz(string flag) {
    // Convert all 'a's to 'z's
    for (int i = 0; i < flag.length(); ++i) {
        if (flag[i] == 'a') {
            flag[i] == 'z';
        }
        else if (flag[i] == 'A') {
            flag[i] == 'Z';
        }
    }

    return flag;
}

string leetspeak(string flag) {
    // Follow this for letters to numbers: http://www.cplusplus.com/forum/lounge/105574/
        // a -> 4
        // e -> 3
        // t -> 7
        // o -> 0
        // i -> 1
    // Follow this for numbers to letters: https://simple.wikipedia.org/wiki/Leet#Letters_for_numbers
        // 0 = O
        // 1 = I
        // 2 = Z
        // 3 = E
        // 4 = A
        // 5 = S
        // 6 = b
        // 7 = T
        // 8 = B
        // 9 = g
    // Consider purposely making one of these an 'if' when it should be an 'else if' just to confuse the fans 
    for (int i = 0; i < flag.length(); ++i) {
        if (flag[i] == 'a') {
            flag[i] = '4';
        }
        else if (flag[i] == 'A') {
            flag[i] = '4';
        }
        else if (flag[i] == 'e') {
            flag[i] = '3';
        }
        else if (flag[i] == 'E') {
            flag[i] = '3';
        }
        else if (flag[i] == 't') {
            flag[i] = '7';
        }
        else if (flag[i] == 'T') {
            flag[i] = '7';
        }
        else if (flag[i] == 'o') {
            flag[i] = '0';
        }
        else if (flag[i] == 'O') {
            flag[i] = '0';
        }
        else if (flag[i] == 'i') {
            flag[i] = '1';
        }
        else if (flag[i] == 'I') {
            flag[i] = '1';
        }
        else if (flag[i] == '0') {
            flag[i] = 'O';
        }
        else if (flag[i] == '1') {
            flag[i] = 'I';
        }
        else if (flag[i] == '2') {
            flag[i] = 'Z';
        }
        else if (flag[i] == '3') {
            flag[i] = 'E';
        }
        else if (flag[i] == '4') {
            flag[i] = 'A';
        }
        else if (flag[i] == '5') {
            flag[i] = 'S';
        }
        else if (flag[i] == '6') {
            flag[i] = 'b';
        }
        else if (flag[i] == '7') {
            flag[i] = 'T';
        }
        else if (flag[i] == '8') {
            flag[i] = 'B';
        }
        else if (flag[i] == '9') {
            flag[i] = 'g';
        }
    }

    return flag;
}

// TODO: Needs more scrambling functions

int main() {
    string flag = "xZHpKXtAr&5mrEc%";

    flag = rot(flag, 8);
    flag = reverse(flag);
    flag = swapperoo(flag);
    cout << "Before leetspeak: " << flag << "\n";
    flag = leetspeak(flag);
    cout << "After leetspeak: " << flag << "\n";
    flag = atoz(flag);
    flag = rot(flag, 12);

    cout << flag;

    return 0;
}