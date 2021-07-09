#include <string>
#include <iostream>

#include "cryptlib.h"
#include "sha.h"
#include "aes.h"
#include "rsa.h"
#include "md5.h" // https://cryptopp.com/wiki/MD5
#include "hex.h"
#include "files.h" 

using std::string;
using namespace CryptoPP;

int main() {
    // string flag = "k2P$h7Eb%^X^WB3p";

    HexEncoder encoder(new FileSink(std::cout));

    std::string msg = "Yoda said, Do or do not. There is no try.";
    std::string digest;

    SHA1 hash;
    hash.Update((const byte*)msg.data(), msg.size());
    digest.resize(hash.DigestSize());
    hash.Final((byte*)&digest[0]);

    std::cout << "Message: " << msg << std::endl;

    std::cout << "Digest: ";
    StringSource(digest, true, new Redirector(encoder));
    std::cout << std::endl;

    // std::cout << flag << "\n";

    return 0;
}