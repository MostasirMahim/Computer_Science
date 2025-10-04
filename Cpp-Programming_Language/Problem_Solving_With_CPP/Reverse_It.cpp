#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int t;
    cin >> t;

    Student students[t];

    for (int i = 0; i < t; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
    }

    int l = 0;
    int r = t - 1;

    while (l < r)
    {
        swap(students[l].s, students[r].s);
        l++;
        r--;
    }

    for (int i = 0; i < t; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
    }

    return 0;
}