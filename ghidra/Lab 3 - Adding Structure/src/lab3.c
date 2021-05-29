#include <stdio.h>
#include <string.h>

struct FlagStruct {
    char flag[17];
};

int main() {
    struct FlagStruct flagStruct;

    strcpy(flagStruct.flag, "93erh6VG%%Y#3PKS");

    printf("%s", flagStruct.flag);

    return 0;
}