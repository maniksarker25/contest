/*
Problem Statement

A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

Input Format

First line will contain T, the number of test cases.
For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.
Constraints

1 <= T <= 1000
1 <= ID <= 3
1 <= |Name| <= 100
'A' <= Section <= 'Z'
0 <= Total Marks <= 100
Output Format

Ouptut the information as asked in the question.
 */

#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        Student student1;
        Student student2;
        Student student3;

        cin >> student1.id >> student1.name >> student1.section >> student1.total_marks;
        cin >> student2.id >> student2.name >> student2.section >> student2.total_marks;
        cin >> student3.id >> student3.name >> student3.section >> student3.total_marks;

        int max_marks = max({student1.total_marks, student2.total_marks, student3.total_marks});

        if (student1.total_marks == max_marks)
        {
            cout << student1.id << " " << student1.name << " " << student1.section << " " << student1.total_marks << endl;
        }
        else if (student2.total_marks == max_marks)
        {
            cout << student2.id << " " << student2.name << " " << student2.section << " " << student2.total_marks << endl;
        }
        else if (student3.total_marks == max_marks)
        {
            cout << student3.id << " " << student3.name << " " << student3.section << " " << student3.total_marks << endl;
        }
    }
    return 0;
}