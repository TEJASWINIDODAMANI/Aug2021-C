#include "feature.h"

int feature(int a, int b, int condition)
{
    int res = 0;
    if (1 == condition)
    {
        res = a+b;
    }
    else if (2 == condition)
    {
        res = a-b;
    }
    else if (3 == condition)
    {
        res = a * b;
    }
    else{
        res = a/b;
    }
    
    
    
    return res;
}