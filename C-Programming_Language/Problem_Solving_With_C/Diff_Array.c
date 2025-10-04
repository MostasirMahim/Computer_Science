#include <stdio.h>
#include <stdlib.h>
int main()
{
    int T;
    scanf("%d", &T);

    int C[T][1000];
    int C_size[T];

    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);
        C_size[i] = N;

        int A[N];
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[j]);
        }

        int B[N];
        for (int j = 0; j < N; j++)
        {
            B[j] = A[j];
        }

        for (int j = 0; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (B[j] > B[k])
                {
                    int temp = B[j];
                    B[j] = B[k];
                    B[k] = temp;
                }
            }
        }

        for (int j = 0; j < N; j++)
        {
            C[i][j] = abs(A[j] - B[j]);
        }
    }

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < C_size[i]; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}