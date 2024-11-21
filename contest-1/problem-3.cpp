#include <bits/stdc++.h>

using namespace std;

int main()
{
    char arr[100001];

    while (cin.getline(arr, 100001))
    {
        int len = strlen(arr);
        int index = 0;
        char no_space_array[100000];

        for (int i = 0; i < len; i++)
        {
            if (arr[i] != ' ')
            {
                no_space_array[index++] = arr[i];
            }
        }

        sort(no_space_array, no_space_array + index);

        no_space_array[index] = '\0';
        cout << no_space_array << endl;
    }

    return 0;
}