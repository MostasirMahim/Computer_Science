#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);

    char res[n][10001];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", res[i]);
    }

    int count[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            count[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(res[i]); j++)
        {
            int ascii = res[i][j];
            if (ascii >= 48 && ascii <= 57)
            {
                count[i][2] += 1;
            }
            else if (ascii >= 65 && ascii <= 90)
            {
                count[i][0] += 1;
            }
            else if (ascii >= 97 && ascii <= 122)
            {
                count[i][1] += 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3 ;j++)
        {
            printf("%d ", count[i][j]);
        }
        printf("\n");
    }

    return 0;
}
