#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int input[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &input[i][j]);
        }
    }

    if (N != M)
    {
        printf("NO\n");
        return 0;
    }

    int flagOk = 0;
    int flagNon = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i == j)
            {
                if (input[i][j] == 1)
                {
                    flagOk = 1;
                }
                else
                {
                    flagNon = 1;
                    break;
                }
            }
            if (i + j == M - 1)
            {
                if (input[i][j] == 1)
                {
                    flagOk = 1;
                }
                else
                {
                    flagNon = 1;
                    break;
                }
            }
           if (i != j && i + j != M - 1)
            {
                if (input[i][j] != 0)
                {
                    flagNon = 1;
                    break;
                }
            }
        }
    }

    if (flagOk == 1 && flagNon == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}