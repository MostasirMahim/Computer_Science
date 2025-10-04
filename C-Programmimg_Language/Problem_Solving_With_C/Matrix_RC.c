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

    for (int j = 0; j < M; j++)
    {
        printf("%d ", input[N - 1][j]);
    }

    printf("\n");
    
    for (int j = 0; j < N; j++)
    {
        printf("%d ", input[j][M - 1]);
    }

    return 0;
}