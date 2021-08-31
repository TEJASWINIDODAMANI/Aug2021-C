/**
 * @file main.c
 * @author Bharath.G ()
 * @brief Multifile program example
 * @version 0.1
 * @date 2021-08-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "stdio.h"
#include "feature.h"

extern void test();     // not preferred

int main()
{
    int result = feature2();
    printf("%d\n", result);
    test();

    return 0;
}

/*
    Preprocessor    - cpp
        * Comments are removed
        * Preprocessor commands are processed
        * Pure c code
        * gcc -E src.c
    Compilation     - gcc
    Assembling      - as
    Linking         - ld
*/