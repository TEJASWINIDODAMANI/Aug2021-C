# Debugging

## Errors in Program
* Compile/Syntax errors
* Runtime errors    ==> Illegal memory access, divide 0
* Logical errors    ==> wrong logic
* Linker error      ==> Undefined reference to functions

* Preprocessor    - cpp
        * Comments are removed
        * Preprocessor commands are processed
        * Pure c code
        * gcc -E src.c
* Compilation     - gcc
    * Syntax errors
    * Semantic  --> var = 100; ===> 100 = var;
    * Parenthesis mismatch
    * Undeclared variable
* Assembling      - as
* Linking         - ld
    * Linkage error


## Memory Map of a Program
* source code file
* output of compiler as executable

* Memory map
    * Code/Text
    * Data - gloabl Variables
        * RW
            * Data  - initialised
            * BSS - block started by symbol - Uninitialised
        * R - const
    * Heap - dynamic variables
    * Stack - Program counter, stack pointer, return address, local variables, passed arguments

    * Lifetime  - how long a variable is in memory
    * Scope     - Where all this variable is visible