#include <string>
#include <iostream>
#include <string.h>
#include <openssl/sha.h>
#include <openssl/md5.h>

using std::string;
using std::cout;


int main() {
    unsigned char flag[] = "k2P$h7Eb%^X^WB3p";
    unsigned char sha1_digest[SHA_DIGEST_LENGTH];


    SHA1(flag, 16, sha1_digest);

    // Convert the hash to hex. It will make things easier on the players
    int i;
    for (i = 0; i < SHA_DIGEST_LENGTH; i++) {
        printf("%02x ", sha1_digest[i]);
    }
    printf("\n");

    const string AES_128_KEY_HEX = "66546A576D5A7134743777217A25432A";
    const string AES_128_IV_HEX = "4D6251655468576D597133743677397A";

    return 0;
}