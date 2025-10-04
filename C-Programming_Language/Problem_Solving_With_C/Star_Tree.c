#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int terms = (N/2) + 1;
    int total = 5+ terms;
    int middle = total - 1;
    char ch = '*';

    for (int i=0; i <total; i++) {
        int space = middle - i;
        int numChars = 2 * i + 1;
        

        for(int j = 0; j < space; j++) {
            printf(" ");
        }

        for(int j = 0; j < numChars; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    int lastSpace = middle - (N/2);

    for (int i=0; i < 5; i++) {
        for(int j = 0; j < lastSpace; j++) {
            printf(" ");
        }

        for(int j = 0; j < N; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
