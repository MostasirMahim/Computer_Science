#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    scanf("%c", &a);

    if (isdigit(a))
    {
        printf("IS DIGIT");
    }
    else if (isalpha(a))
    {
        if (islower(a))
        {
            printf("ALPHA\nIS SMALL");
        }
        else
        {
            printf("ALPHA\nIS CAPITAL");
        };
    };
    return 0;
}