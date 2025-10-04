#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    char b[10];

    snprintf(b, sizeof(b), "%d", a);

    char first_digit = b[0];
    int first_digit_int = first_digit - '0';

    if (first_digit_int % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}