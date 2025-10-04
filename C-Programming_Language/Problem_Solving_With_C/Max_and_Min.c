#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max, min;

    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else if (b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    if (max == a)
    {
        if (b < c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
    }
    else if (max == b)
    {
        if (a < c)
        {
            min = a;
        }
        else
        {
            min = c;
        }
    }
    else
    {
        if (a < b)
        {
            min = a;
        }
        else
        {
            min = b;
        }
    }
    printf("%d %d\n", min, max);
    return 0;
}