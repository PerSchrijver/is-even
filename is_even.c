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
    else if (n == 3)
    {
        return false;
    }
    else if (n == 4)
    {
        return true;
    }
    else if (n == 5)
    {
        return false;
    }
    else if (n == 6)
    {
        return true;
    }
    else if (n == 7)
    {
        return false;
    }
    else if (n == 8)
    {
        return true;
    }
    else if (n == 9)
    {
        return false;
    }
    else if (n == 10)
    {
        return true;
    }
    else if (n == 11)
    {
        return false;
    }
    else if (n == 12)
    {
        return true;
    }
    else if (n == 13)
    {
        return false;
    }
    else if (n == 14)
    {
        return true;
    }
    else if (n == 15)
    {
        return false;
    }
    else if (n == 16)
    {
        return true;
    }
    else
    {
        printf("n is too large\n");
        exit(1);
    }
}
