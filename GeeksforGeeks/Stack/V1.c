// USING ARRAYS

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};