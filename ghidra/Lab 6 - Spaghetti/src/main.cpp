#include <string>

using std::string;

string obfu1(string flag) {
    // Reverses the string

    string temp = flag;
    flag.clear();

    for (int i = temp.length() - 1; i >= 0 ; --i) {
        flag += temp[i];
    }

    return flag;
}

void obfu2(string& flag, int rot_val) {
    // Rot function with variable rot
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
}

string obfu3(string flag) {
    // Swap the positions of pairs of characters
    for (int i = 0; i < flag.length() - 1; i+=2) {
        char temp = flag[i];
        flag[i] = flag[i + 1];
        flag[i + 1] = temp;
    }

    return flag;
}

string obfu4(string flag) {
    // Switch 'a's to 'z's
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

string obfu5(string flag) {
    // Translates things to leetspeak
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

void obfu6(string& flag) {
    // Reverses capitalization of alphabetic characters
    for (int i = 0; i < flag.length(); ++i) {
        if ((flag[i] >= 0x41) && (flag[i] <= 0x5a)) {
            flag[i] += 0x20;
        }
        else if ((flag[i] >= 0x61) && (flag[i] <= 0x7a)) {
            flag[i] -= 0x20;
        }
    }
}

int main() {
    string flag = "xZHpKXtAr&5mrEc%";

    obfu6(flag);
    // cout << "After reverseCapitalization: " << flag << "\n";
    obfu2(flag, 8);
    // cout << "After rot8: " << flag << "\n";
    flag = obfu1(flag);
    // cout << "After reverse: " << flag << "\n";
    flag = obfu3(flag);
    // cout << "After swapperoo: " << flag << "\n";
    flag = obfu5(flag);
    // cout << "After leetspeak: " << flag << "\n";
    flag = obfu4(flag);
    // cout << "After atoz: " << flag << "\n";
    obfu2(flag, 12);
    // cout << "After rot12: " << flag << "\n";
    obfu6(flag);
    // cout << "After reverseCapitalization: " << flag << "\n";
    flag = obfu5(flag);
    // cout << "After leetspeak: " << flag << "\n";
    obfu2(flag, 3);
    // cout << "After rot3: " << flag << "\n";

    // cout << flag << "\n";

    return 0;
}