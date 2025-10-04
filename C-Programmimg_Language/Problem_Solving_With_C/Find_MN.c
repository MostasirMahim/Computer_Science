#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    long long input[T][4];


    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%lld", &input[i][j]);
        }
    }

    for (int i = 0; i < T; i++)
    {
        long long M = input[i][0];
        long long N = input[i][1];
        long long K = input[i][2];
        long long P = input[i][3];

        long long left = N;
        left *= K;
        left *= P;
        long long positiveLeft = left > 0 ? left : -left;
        long long right = M / positiveLeft;

        if (right * positiveLeft == M)
        {
            input[i][0] = right;
        }
        else
        {
            input[i][0] = -1;
        }
    }
    for (int i = 0; i < T; i++)
    {
        printf("%lld\n", input[i][0]);
    }

    return 0;
}