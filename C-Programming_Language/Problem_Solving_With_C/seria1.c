#include<stdio.h>

int main()
{
    int m, i;
    long long a = 0, b = 1, next;
    
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &m);
    
    if(m <= 0)
    {
        printf("Invalid input! Please enter a positive integer.\n");
        return 1;
    }
    
    printf("Fibonacci Sequence: ");
    
    for(i = 0; i < m; i++)
    {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }
    
    printf("\n");
    return 0;
}
