#include<bits/stdc++.h>
using namespace std;
int main() {
        int n;//O(1)
    cin >> n; //O(1)

    for (int i=1;i<=n;i*=2) { //O(logN)
        cout << i << " ";
    }
        //OUTPUT : //O(n) -> n=1000 -> 1 2 3 4 5...1000 -> 1000 Operations
        //OUTPUT : //O(logN = i*=2) -> n=1000 -> 1 2 4 8 16 32 64 128 256 512
        //n=1000 -> log2(1000) = 9.966 ->10 Operations  

        //So Depends on n & Its worst case so its final complexity
    return 0; //O(1)
}

int main2() {
        int n;//O(1)
    cin >> n; //O(1)

    for (int i=n;i>=1;i/=3) { //O(logN) base 3 becuse i */ / = 3
        cout << i << " ";
    }
        //OUTPUT : //O(n) -> n=1000 -> 1 2 3 4 5...1000 -> 1000 Operations
        //OUTPUT : //O(logN = i/=3) -> n=1000 -> 1 2 4 8 16 32 64 128 256 512
        //n=1000 -> log3(1000) = 6.287 ->7 Operations  

        //So Depends on n & Its worst case so its final complexity
    return 0; //O(1)
}