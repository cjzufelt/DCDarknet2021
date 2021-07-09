#include <string>
#include <iostream>
#include <string.h>
#include <openssl/sha.h>

using std::string;
using std::cout;


int main() {
    unsigned char flag[] = "k2P$h7Eb%^X^WB3p";
    unsigned char sha1_digest[SHA_DIGEST_LENGTH];

    SHA1(flag, 17, sha1_digest);

    std::cout << sha1_digest << "\n";

    int i;
    for (i = 0; i < 20; i++) {
        printf("%02x ", sha1_digest[i]);
    }
    printf("\n");

    return 0;
}