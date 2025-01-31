#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;
    int n;
    cin >> n;
    while (n--)
    {
        string command;
        cin >> command;
        if (command == "ADD")
        {
            int position;
            cin >> position;
            string song_name;
            cin >> song_name;
            int size = l.size();
            if (position < 0 || position > size)
            {
                cout << "Invalid" << endl;
            }
            else
            {
                auto it = l.begin();
                for (int i = 0; i < position; i++)
                {
                    it++;
                }
                l.insert(it, song_name);
            }
        }
        else if (command == "DELETE")
        {
            int position;
            cin >> position;
            int size = l.size();
            if (position < 0 || position >= size)
            {
                cout << "Invalid" << endl;
            }
            else
            {
                auto it = l.begin();
                for (int i = 0; i < position; i++)
                {
                    it++;
                }
                l.erase(it);
            }
        }
        else if (command == "PRINT")
        {
            if (l.empty())
            {
                cout << "EMPTY" << endl;
            }
            else
            {
                for (string val : l)
                {
                    cout << val << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}