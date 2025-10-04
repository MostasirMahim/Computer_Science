#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int totalMarks;

    void input()
    {
        cin >> id >> name >> section >> totalMarks;
    }

    void print()
    {
        cout << id << " " << name << " " << section << " " << totalMarks << endl;
    }
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student A, B, C;
        A.input();
        B.input();
        C.input();

        if (A.totalMarks > B.totalMarks && A.totalMarks > C.totalMarks)
        {
            A.print();
        }
        else if (B.totalMarks > A.totalMarks && B.totalMarks > C.totalMarks)
        {
            B.print();
        }
        else if (C.totalMarks > A.totalMarks && C.totalMarks > B.totalMarks)
        {
            C.print();
        }
        else
        {
            if (A.totalMarks == B.totalMarks && B.totalMarks == C.totalMarks)
            {
                if (A.id < B.id && A.id < C.id)
                    A.print();
                else if (B.id < A.id && B.id < C.id)
                    B.print();
                else
                    C.print();
            }
            else if (A.totalMarks == B.totalMarks)
            {
                if (A.id < B.id)
                    A.print();
                else
                    B.print();
            }
            else if (A.totalMarks == C.totalMarks)
            {
                if (A.id < C.id)
                    A.print();
                else
                    C.print();
            }
            else
            {
                if (B.id < C.id)
                    B.print();
                else
                    C.print();
            }
        }
    }

    return 0;
}
