#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_even(double n)
{
    if (n == 0)
    {
        return true;
    }
    else
    {
        printf("n is too large\n");
        exit(1);
    }
}
