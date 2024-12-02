/*
Problem Statement

You will be given data for N students, where each student will have a name (nm), class (cls), section (s) and student ID (id). The Headmaster decided to change the sections of the students. He wants to reverse their sections. Now he needs your help to do so.

Your task is reverse their section and print all the students data. That means the section of the first student will be replaced by the section of the last student, the section of the second student will be replaced by the section of the second last student and so on. See the sample input and output for more clarifications.

Input Format

First line will contain N.
Next N lines will contain nm, cls, s, and id respectively.
Constraints

1 <= N <= 100
1 <= |nm| <= 100 and will contain only English alphabets.
1 <= cls <= 10
'A' <= s <= 'Z'
1 <= id <= 100
Output Format

Output all the students data after reversing their section.


 */

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
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        char temp = a[i].s;
        a[i].s = a[j].s;
        a[j].s = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}