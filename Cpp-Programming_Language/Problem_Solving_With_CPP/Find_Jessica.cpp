#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    getline(cin, s);

    stringstream ss(s);
    string a;
    int x = 0;
    while (ss >> a)
    {
        if (a == "Jessica")
        {
            x = 1;
        }
    }
    if (x == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}