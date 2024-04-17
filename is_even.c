#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_even(double n)
{
    if (n == 0)
    {
        return true;
    }
    else if (n == 1)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else
    {
        printf("n is too large\n");
        exit(1);
    }
}
