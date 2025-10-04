#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int input[N];

    for (int i = 0; i < N; i++)
    {
        cin >> input[i];
    };

    sort(input, input + N);
    for (int i = 0; i < N; i++)
    {
        cout << input[i] << " ";
    };

    cout << endl;
    sort(input, input + N, greater<int>());
    for (int i = 0; i < N; i++)
    {
        cout << input[i] << " ";
    };

    return 0;
}