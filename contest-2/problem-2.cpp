#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    getline(cin, s);

    stringstream ss(s);

    string need_word = "Jessica";
    string word;
    int is_match = 0;
    while (ss >> word)
    {
        if (need_word == word)
        {
            is_match = 1;
        }
    }

    if (is_match == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}