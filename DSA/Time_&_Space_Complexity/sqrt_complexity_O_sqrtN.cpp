#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    for(int i =1 ; i <= sqrt(n); i++) {
        cout << i << " ";
        //OUTPUT : //O(sqrtN) -> n=36-> 1 2 3 4 5 6 -> root36=6 Operations
    }
    return 0;
}
int main2 () {
    int n;
    cin >> n;

    for(int i =1 ; i*i <= n; i++) {
        cout << i << " ";
        //OUTPUT : //O(sqrtN) -> n=1000-> 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 -> root1000=31.6 ->31 full Operations
    }
    return 0;
}