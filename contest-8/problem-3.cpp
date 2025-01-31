#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;
        int height_count = INT_MIN;
        string height_count_s;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > height_count)
            {
                height_count = mp[word];
                height_count_s = word;
            }
        }
        cout << height_count_s << " " << height_count << endl;
    }

    return 0;
}