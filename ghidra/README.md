# Ghidra

The challenges in this directory are meant to teach reverse-engineering skills. These challenges were intended to be solved using the [Ghidra](https://ghidra-sre.org/) reverse-engineering tool.

The goal of all challenges is to retrieve the flag string. These challenges were inspired by the [Crackmes](https://crackmes.one/) challenges.

All binaries were compiled with a GNU/Linux machine using gcc or g++ with x86-64 bit little-endian architecture.

Contained in each Lab directory is three additional directories:

* `bin/` - Contains the binary for the lab
* `src/` - Contains the source code for the lab
* `ghidra/` - Contains my Ghidra project where I confirmed that everything looked correct.

Final Challenge Ideas:

* Obfuscate the binary in a similar fashion to Stuxnet. They would have to deobfuscate it before being able to put it through Ghidra
* Require a certain environment for execution. Get them to figure out what that special environment is.