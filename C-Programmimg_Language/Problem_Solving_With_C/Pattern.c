#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int total = 2 * N - 1;

    for (int i = 0; i < total; i++)
    {
        int numChars;
        int spaces;
        char ch;
        int middle = total / 2 + 1;

        if (i < middle)
        {
            numChars = 2 * i + 1;
            spaces = N - i - 1;
        }
        else
        {
            numChars = 2 * (total - i - 1) + 1;
            spaces = i - N + 1;
        }

        ch = (i % 2 == 0) ? '#' : '-';

        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < numChars; k++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}
