# Ghidra

The challenges in this directory are meant to teach reverse-engineering skills. These challenges were intended to be solved using the [Ghidra](https://ghidra-sre.org/) reverse-engineering tool.

The goal of all challenges is to retrieve the flag string. These challenges were inspired by the [Crackmes](https://crackmes.one/) challenges.

All binaries were compiled with a GNU/Linux machine using gcc or g++ with x86-64 bit little-endian architecture.

Ideas for challenges:

* Make a rot13 function
  * Make all sorts of functions to obfuscate stuff.
* Overload operators
* Class inheritance and friends
* Using several different hashing/encryption algorithms
* Threading

Final Challenge Ideas:

* They need to figure out a string which will be used as a key to decrypt another string in another file which is the actual answer.
  * -Or- They need to edit the binary to get the executable to decrypt the other file. 