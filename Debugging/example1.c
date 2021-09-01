/**
 * @file example1.c
 * @author Bharath.G ()
 * @brief 
 * @version 0.1
 * @date 2021-09-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "stdio.h"

int var1 = 100;

void function1()
{
    for (int index = 10; index > -1; index--)
    {   
        var1 = var1 /index ;
    }
}
int main()
{
    function();
    printf("%d\n", var1);
    
    return 0;
}