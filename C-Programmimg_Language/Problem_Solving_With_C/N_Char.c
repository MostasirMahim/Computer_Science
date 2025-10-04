#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    scanf("%c", &a);

    if (islower(a))
    {
        char b = toupper(a);
        printf("%c", b);
    }
    else if (isupper(a))
    {
        char b = tolower(a);
        printf("%c", b);
    };
    return 0;
}