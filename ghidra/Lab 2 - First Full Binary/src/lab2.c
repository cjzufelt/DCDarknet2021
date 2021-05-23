#include <stdlib.h>
#include <string.h>

int main() {
    char suffix[] = "Pw$T9$%u";
    char prefix[] = "zut9vkCLpi";
    char* flag = malloc(17);

    strcat(flag, prefix);
    memcpy(flag + 8, suffix, 8);

    return 0;
}