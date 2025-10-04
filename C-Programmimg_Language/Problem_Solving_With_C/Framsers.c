#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n;
    scanf("%d", &n);
    
    int res[n][3];
    
    for (int i=0; i <n ; i++) {
        for (int j=0; j <3; j++) {
            
            scanf("%d", &res[i][j]);
        }
    }

    int out[n];
    for (int i=0; i <n ; i++) {
        int prev = res[i][0];
        int extra = res[i][1];
        int days = res[i][2];

        int totalWorkers = prev + extra;
        int lastDays = (prev * days) / totalWorkers;
        int diff = days - lastDays;
        out[i] = diff;
    }

    for (int i=0; i <n ; i++) {
        printf("%d\n", out[i]);
    }
    return 0;
}
