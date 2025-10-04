#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b) {
    int totalA = a.math_marks + a.eng_marks;
    int totalB = b.math_marks + b.eng_marks;

    if (totalA == totalB)
        return a.id < b.id;
    return totalA > totalB;
}

int main() {
    int n;
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++) {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
