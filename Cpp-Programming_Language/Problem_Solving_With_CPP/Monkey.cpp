#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    char a[100005];

    while (cin.getline(a, 100005)) {
        int len = strlen(a);

        sort(a, a + len);
        
        for (int i = 0; i < len; i++) {
            if (a[i] >= 'a' && a[i] <= 'z') {
                cout << a[i];
            }
        }

        cout << endl;
    }

    return 0;
}
